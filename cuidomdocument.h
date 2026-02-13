#ifndef CUIDOMDOCUMENT_H
#define CUIDOMDOCUMENT_H

#include "cuidomelement.h"
#include <QDomDocument>

class CUiDomDocument : public QDomDocument {
public:
    CUiDomDocument();

    CUiDomElement init();
};

#endif // CUIDOMDOCUMENT_H
