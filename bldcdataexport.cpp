#include "bldcdataexport.h"

BLDCDataExport::BLDCDataExport()
{
    folderName="CSVData";
}


void::BLDCDataExport::openFile(QString fileName)
{
    if(QDir(folderName).exists() ==false) //checks if the folder exists
    {
        QDir().mkdir(folderName); // creates the folder if it does not exist
    }
    csvFile = new QFile(folderName+"//"+fileName+".csv");//initialize file object
    if(csvFile->open(QIODevice::WriteOnly|QFile::Truncate))
    {
        csvFileStream = new QTextStream(csvFile);//initialize filestream object
    }
}

void::BLDCDataExport::setUpFile(QString header)
{
    Q_UNUSED(header);
    *csvFileStream<<"Temp Mos,Temp Mos 2,Temp Mos 3,Temp Mos 4,Temp Mos 5,Temp Mos 6,Temp PCB,Current In,Motor Current,Duty,RPM ,Voltage in\n";
    csvFileStream->flush(); // YOU MUST FLUSH THE FILESTREAM OBJECT TO FLUSH THE BUFFER OR IT WILL NOT PRINT TO THE FILE
}

void::BLDCDataExport::writeFile(MC_VALUES values)
{
    *csvFileStream<<values.temp_mos1<<","<<values.temp_mos2<<","<<values.temp_mos3<<","<<values.temp_mos4<<","<<values.temp_mos5<<","<<values.temp_mos6<<","<<values.temp_pcb<<","<<values.current_in<<","<<values.current_motor<<","<<values.duty_now<<","<<values.rpm<<","<<values.v_in<<"\n";
    csvFileStream->flush(); // YOU MUST FLUSH THE FILESTREAM OBJECT TO FLUSH THE BUFFER OR IT WILL NOT PRINT TO THE FILE
}

void::BLDCDataExport::closeFile()
{
    csvFile->close();
    delete csvFileStream;
}
