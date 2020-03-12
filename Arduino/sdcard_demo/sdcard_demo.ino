#include <SD.h>

// set up variables using the SD utility library functions:
Sd2Card card;
SdVolume volume;
SdFile root;
File myFile;

// change this to match your SD shield or module;
// Arduino Ethernet shield: pin 4
// Adafruit SD shields and modules: pin 10
// Sparkfun SD shield: pin 8
const int chipSelect = 4;

void setup()
{
 // Open serial communications and wait for port to open:
  Serial.begin(9600);
   while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }


  Serial.print("\nInitializing SD card...");
  // On the Ethernet Shield, CS is pin 4. It's set as an output by default.
  // Note that even if it's not used as the CS pin, the hardware SS pin
  // (10 on most Arduino boards, 53 on the Mega) must be left as an output
  // or the SD library functions will not work.
  pinMode(10, OUTPUT);     // change this to 53 on a mega


  // we'll use the initialization code from the utility libraries
  // since we're just testing if the card is working!
  if (!card.init(SPI_HALF_SPEED, chipSelect)) {
    Serial.println("initialization failed. Things to check:");
    Serial.println("* is a card is inserted?");
    Serial.println("* Is your wiring correct?");
    Serial.println("* did you change the chipSelect pin to match your shield or module?");
    return;
  } else {
   Serial.println("Wiring is correct and a card is present.");
  }

  // print the type of card
  Serial.print("\nCard type: ");
  switch(card.type()) {
    case SD_CARD_TYPE_SD1:
      Serial.println("SD1");
      break;
    case SD_CARD_TYPE_SD2:
      Serial.println("SD2");
      break;
    case SD_CARD_TYPE_SDHC:
      Serial.println("SDHC");
      break;
    default:
      Serial.println("Unknown");
  }

  // Now we will try to open the 'volume'/'partition' - it should be FAT16 or FAT32
  if (!volume.init(card)) {
    Serial.println("Could not find FAT16/FAT32 partition.\nMake sure you've formatted the card");
    return;
  }


  // print the type and size of the first FAT-type volume
  uint32_t volumesize;
  Serial.print("\nVolume type is FAT");
  Serial.println(volume.fatType(), DEC);
  Serial.println();

  volumesize = volume.blocksPerCluster();    // clusters are collections of blocks
  volumesize *= volume.clusterCount();       // we'll have a lot of clusters
  volumesize *= 512;                            // SD card blocks are always 512 bytes
  Serial.print("Volume size (bytes): ");
  Serial.println(volumesize);
  Serial.print("Volume size (Kbytes): ");
  volumesize /= 1024;
  Serial.println(volumesize);
  Serial.print("Volume size (Mbytes): ");
  volumesize /= 1024;
  Serial.println(volumesize);

  if (!SD.begin(4)) {
    Serial.println("initialization failed!");
    return;
  }

  Serial.println("Creating example.txt...");
  myFile = SD.open("example.txt", FILE_WRITE);  
  myFile.close();

  // Check to see if the file exists:
  if (SD.exists("example.txt")) {
    Serial.println("example.txt exists.");
  } else {
    Serial.println("example.txt doesn't exist.");
  }

  // delete the file:
  Serial.println("Removing example.txt...");
  //SD.remove("example.txt");

  if (SD.exists("example.txt")) {
    Serial.println("example.txt exists.");
  } else {
    Serial.println("example.txt doesn't exist.");
  }
  Serial.println("\nFiles found on the card (name, date and size in bytes): ");
  root.openRoot(volume);

  // list all files in the card with date and size
  root.ls(LS_R | LS_DATE | LS_SIZE);
  
}

// pressureAnalogPinN
#define  AP0  0
#define  AP1  1
#define  AP2  2
#define  AP3  3
#define  AP4  4

File dataFile;

void loop(void) {
  dataFile = SD.open("example.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening file");
    while (1) ;
  }
  if (dataFile){
    /*
    adc_init (ADC, VARIANT_MCK, adc_clk,  ADC_STARTUP_FAST);

    adc_configure_timing (ADC, 0,  //uc_tracking,        
        (const enum adc_settling_time_t) ADC_MR_SETTLING_AST3,  //settling,
        (const uint8_t) 1); //uc_transfer
    adc_enable_channel ((Adc *) ADC, (const enum adc_channel_num_t) 0);
    adc_disable_anch (ADC);

    adc_configure_power_save (ADC, ADC_MR_SLEEP_NORMAL, ADC_MR_FWUP_OFF);
    adc_configure_trigger (ADC, ADC_TRIG_PWM_EVENT_LINE_0, ADC_MR_FREERUN_OFF);
    */
    dataFile.print("0- ");
    dataFile.println(analogRead(AP0));
    dataFile.print("1- ");
    dataFile.println(analogRead(AP1));
    /*
    dataFile.print("2- ");
    dataFile.println(analogRead(AP2));
    dataFile.print("3- ");
    dataFile.println(analogRead(AP3));
    dataFile.print("4- ");
    dataFile.println(analogRead(AP4));
    */
    dataFile.close();
  }
}
