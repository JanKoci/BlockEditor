#ifndef INPUTBLOCK_H
#define INPUTBLOCK_H

#include "baseblock.h"
#include "textblock.h"


class InputBlock : public BaseBlock
{
public:
    bool propagated;
    bool is_computable;
    bool has_value();
    void propagate();
    OutputPort *out_port;

    InputBlock(QMenu *contextMenu, QGraphicsItem *parent = 0);


private:
    TextBlock *textBlock;
};

#endif // INPUTBLOCK_H