#ifndef BLDCDATAEXPORT_H
#define BLDCDATAEXPORT_H
#include <QtWidgets>
#include "datatypes.h"
#include <QFile>
#include <QTextStream>
#include <QDir>

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
    QString folderName;
};

#endif // BLDCDATAEXPORT_H
