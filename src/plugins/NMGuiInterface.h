#ifndef NM_GUI_INTERFACE_H
#define NM_GUI_INTERFACE_H

#include <QtPlugin>

class NMGuiInterface
{
    public:
        virtual ~NMGuiInterface();

        virtual void runPlugin() = 0;
};
Q_DECLARE_INTERFACE(NMGuiInterface, "NickelMenu.GuiInterface/1.0");

#endif // NM_GUI_INTERFACE_H
