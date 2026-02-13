#ifndef CGUITREEDOMDOCUMENT_H
#define CGUITREEDOMDOCUMENT_H

#include "cguitreedomelement.h"
#include <QDomDocument>

class CGuiTreeDomDocument : public QDomDocument {
public:
    CGuiTreeDomDocument();

    CGuiTreeDomElement getFirstGuiObjectElement();
};

#endif // CGUITREEDOMDOCUMENT_H
