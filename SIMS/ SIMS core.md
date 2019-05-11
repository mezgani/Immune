#  SIMS core
> - Record states into tampon database
> - Massive analyze of snapshots
> - Processor handler
> - Messaging handler
> - Message processing
> - Management handlers
> - Decoupling
> - Delivery protocols
> - Delivery mechanism
> 
> Core : processor(s), stack, busses(signal bus, data bus, system bus)
> 
> SIMS runtime : any request processing server could be implemented using SIMS core
> 
> File I/O + Pipes
> Enhanced Memory Management
> Mutex + Locks, Asynchronous Signal
> Network I/O
> Multitasking (Threads & Processes)
> Dynamic Linking
> Time
> Authentification 
> 

## Vulnerability System
> INPUT : RSS, CRAWLER, SEARCH ENGINE
> OUPUT: DATA
> 
> Handle vulnerabilities {index, search, insert, update, list, delete}
> I_ Interconnect with core
> |_ Interact with Database
> |_ Interact with CERT { API }
> |_ Interact with DISCLOSURE DATABASE { rss, crawler, search }
> |_Do vulnerabilities checks
>    TYPED  : { OS, APPS }  
>    KINDOF : { HIGH VULN, MEDIUM VULN, SMALL VULN, NOT VULN }
> 

### Search Engine
* 
### Crawler
### Aggregation feeds
## Alert and Notification System
### Call SIP
### SMS
### Mail
### XMPP
###  Other plugin (printers, fax, ...)
## SNMP Monitor
### SNMP parser
### Remote agent sensor
### Passive parser
## Browser
### Advanced image handling
### Mobile integration
### Reporting tools
### Location mapping
## Database Driver
> INPUT: DATA
> OUPUT: DATA
> 
> Handle Database actions {index, search, insert, update, list, delete}
> I_ Interconnect with core
> 

### Database connectivity management
### Input/Output management
### Queue management
## Exception handler
> - Initialize exception stack
>   allocation memory, for stack struct
> - Realize a post check for unresolvable exception
>   if exception exist
>        send no ready message to SIMS core
>        listen for connection from SIMS core:
>        if receive report query
>           send full report of exceptions to SIMS core
>   else
>        send ready message to SIMS core
> 

### Exception treatment
### Exception stack management
## Drive Connector
## Modules handler
> Handle module_stack { init, push, pop }
> |_Load modules from yaml file
> |_Load, remove, inform modules from exec files
> |_Interact with modules ressources { request, reply }
> 
> 
> Handle module_dep_list { add, search, remove, index, link }
> 
> """
> Handle exception_list { add, search, remove, index, raise } 
> bounced to core
> """
> Interconnect with core { request, reply }, processor, memory, modules
> |_Inform about stacks status {Init, pops, push, full}
> 
> Allocate module_stack 

### Module register handler
* Registration
* Insertion
* Remove
### Exception handler
### Module dependance management(tree)
## Log Management System
### Log intelligent treatment
### Checks for anomalies
* Bugs
* Failure
* Attacks
    * DOS, DDOS
    * Overflow
    * Web attacks
## Emergency Action Plan
### Implement secure strategy
* Block attack
* Run or start service
* Run plugin
* Other action
## Upgrade Management System
### Dispatching
### Update (single, full)
## Remote IT infrastructure (Light client package, appliance)
### NOC master  daemon
> INPUT  : IP/UDP
> OUPUT : IP/UDP, SOAP
> NODES : N
> RESSOURCES : M
> 
> - Election algorithm
> 
> - Snapshots control
> Create multi channels message
> When receive probe from neighbours
> Register local states into database
> Send acknowledge messages to each channel
> Send full report to SIMS core
> 
> - Fail over architecture
>   Define deciding node
> 
> Be database slave, NOC master  
> if not Failure of NOC slave:
>    discover and scan
>    inject data into master database
> else If Failure : 
>    Select and Be Master core network 
>    Broadcast identity of leader node (Master) to all process
>    (N - 2 messages send) * M 
> 	Send identity to UTM core 
> 
> 
> 
>  Election state:
> sleep, candidate, leader, lost
> 

* Data crypt module
* Snmp module
* Remote module executor
* Remote sensor plugin
* Scanner module
* Log module
### NOC slave  daemon (cache)
> INPUT  : IP/UDP
> OUPUT : IP/UDP, SOAP
> NODES : N
> RESSOURCES : M
> 
> Database master, and NOC slave
> if not Failure of NOC master:
>    send reports to SIMS core
>    replicate data
>    sleep time
> 
> else If Failure : 
>    Select and Be Master core network
>    continue as database master 
>    Broadcast identity of leader node (Master) to all process
>    (N - 2 messages send) * M 
> 	Send identity to UTM core 
> 
> 
> 
>  Election state:
> sleep, candidate, leader, lost
> 

* Data crypt module
* Snmp module
* Remote module executor
* Remote sensor plugin
* Scanner module
* Log module
### Summary: Structuted data 
## Help desk center
## Vulnerability exploiter
## International CERT
## SIP gateway
## SMSC (operator)
## Security Information Management System
## Target 
### Remote agent executor (SSL, stunnel)
### Snmp daemon
## Disclosure  database 
## CERT Team
## Data mapping and integration
> INPUT : XML, UDP
> OUTPUT : DATA
> 
> if INPUT is UDP:
> - Socket listening for UDP request
> - Parse UDP packets and send resource request to module    
>   handler or SIMS core
> - Wait for resource reply (authorization)
> - Send Data to SIMS core, SIMS apply policy and filtering strategy
>   and push data into stack 
> - Processor apply MessageProcessing
> 
> if INPUT is XML:
>    Do the same

### API XMLRPC
* HTTP
* SMTP
### IP/UDP

*XMind: ZEN - Trial Version*