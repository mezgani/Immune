/* The core of UTM server is analog to job doing by main board
 * by this side, the core push and pop data into memory, and treat
 * them by processor.
 */

#define ESIZE 1024
#define MSIZE 1024


#define PROCMAX 64
#define MEMRMAX 32
#define PCIMAX  32
#define AGPMAX  12


/* This basic modern computer main board will have all the following
 * component slots
 */
 
struct mainboard {
  /* processor(s) number, defaut is set to one and can be increased */
  short unsigned int nb_processor;

  /* memory(ies) number, default is set to one and can be increased */
  short unsigned int nb_memory;

  /* pci slots number, this is the default bus for communicate processor
   * with the rest of UTM modules
   */
  short unsigned int nb_pci;
  
  /* agp is number that represent the default system browser  (e.g API)
   */  
  short unsigned int nb_agp;

  /* number of powser supply slot, is simply the number of composant ressources
   */
  short unsigned int nb_power;

  /* number of pipes transporting data */
  short unsigned int databus;

  /* number of pipes transporting system message */
  short unsigned int systembus;

  /* number of pipes transporting signal message */
  short unsigned int signalbus;

  /* pointer to processor */
  struct central_processor_socket *cpsptr;

  /* pointer to memory */
  struct memory_socket *msptr;
  
  /* pointer to pci slots */
  struct pci_slot *pptr;
 
  /* pointer to drive connector, and it can be disk, or SAN disk */
  struct drive_connector *dcptr;
  
  /* pointer to agp slot (APIs) */
  struct agp_graphics_slot *agpptr;

  /* pointer to bios processor */
  struct bios_processor *biosptr;

  /* pointer to input/output connector */
  struct io_connector *ioptr;
  
  /* pointer to power supply connector */
  struct power_supply_sonnector *pscptr;

  /* pointer to mainborad battery */
  struct mainboard_battery *mbbptr;

};

/*
 * Processor load basic input/ouput system into stack, verify it self and 
 * do the post check for core module existance: processor, stack, modules stack,
 * modules dependance tree, exception handler, database.
 */



/*
 * The variable sommet point to module_stack sommet, load module instruction
 * into exec_stack and  
 */


/*
 * Splitting message into data example "MessageProcessing VNS"
 */

void splitting( char *message );
void workflow();
void messageProcessing( struct module_stack *source );
void auditing();
void logging();
void control();
void flush();
void dashboard();
void managementHandler();
void buffering();
void protocolMatching();
void gateway();
void decouplingHandler();
void ptpOptionOne2Many();
void ptpOptionMany2Many();
void ptpOptionMany2One();
void deliveryProtocols();
void sheduling();
void routing();
void dispaching();
void deliveryOrdering();
void sequencing();
void deliveryMechanism();

