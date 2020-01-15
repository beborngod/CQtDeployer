#ifndef DEFAULTDISTRO_H
#define DEFAULTDISTRO_H

#include "idistribution.h"

class DEPLOYSHARED_EXPORT DefaultDistro : public iDistribution
{
public:
    DefaultDistro(FileManager *);

    // iDistribution interface
public:
    QString getConfig() const;
    bool deployTemplate() const;
    Envirement toolKitLocation() const;
    QString runCmd() const;
    QStringList runArg() const;
    bool removeTemplate() const;
};

#endif // DEFAULTDISTRO_H
