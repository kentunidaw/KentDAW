/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
: menuBar(this)
{
    setSize (getParentWidth(), getParentHeight());
    {
        addAndMakeVisible(&menuBar);
        transport = new Transport();
        addAndMakeVisible(*transport);
        transport->setBounds(getWidth() - 200, getHeight() - 200, getWidth(), 200);
    }
}

MainContentComponent::~MainContentComponent()
{
    deleteAllChildren();
}

StringArray MainContentComponent::getMenuBarNames()
{
    StringArray *menuItems = new StringArray();
    menuItems->add("File");
    menuItems->add("Edit");
    menuItems->add("Transport");
    menuItems->add("Arrange");
    menuItems->add("Window");
    menuItems->add("Help");
    
    return *menuItems;
}

PopupMenu MainContentComponent::getMenuForIndex(int index, const String &name)
{
    PopupMenu menu;

    if(name == "File") {
        // Add file menu items
        menu.addItem(NewProject, "New Project");
        menu.addItem(Close, "Close");
    } else if(name == "Edit") {
        menu.addItem(Cut, "Cut");
        menu.addItem(Copy, "Copy");
        menu.addItem(Paste, "Paste");
    } else if(name == "Transport") {
        
    } else if(name == "Arrange") {
        
    } else if(name == "Window") {
        
    } else if(name == "Help") {
        
    }
    return menu;
}

void MainContentComponent::menuItemSelected(int menuItemID, int index)
{
    switch(menuItemID)
    {
        case NewProject:
            break;
        case Close:
            JUCEApplication::getInstance()->systemRequestedQuit();
            break;
        case Cut:
            break;
        case Copy:
            break;
        case Paste:
            break;
    }
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colour (0xff001F36));

    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
}

void MainContentComponent::resized()
{
    menuBar.setBounds(0, 0, getWidth(), 20);
}