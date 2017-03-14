#ifndef BLDCDATAEXPORT_H
#define BLDCDATAEXPORT_H
#include <QtWidgets>
#include "datatypes.h"
#include <QFile>
#include <QTextStream>
class BLDCDataExport
{
public:
    BLDCDataExport();
    void openFile(QString fileName);
    void setUpFile(QString header);
    void writeFile(MC_VALUES values);
    void closeFile();
private:
    QFile *csvFile;
    QTextStream *csvFileStream;
};

#endif // BLDCDATAEXPORT_H
