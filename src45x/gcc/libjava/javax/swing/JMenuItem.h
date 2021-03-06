
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JMenuItem__
#define __javax_swing_JMenuItem__

#pragma interface

#include <javax/swing/AbstractButton.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
      namespace event
      {
          class KeyEvent;
          class MouseEvent;
      }
    }
    namespace beans
    {
        class PropertyChangeListener;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleContext;
    }
    namespace swing
    {
        class Action;
        class Icon;
        class JMenuItem;
        class KeyStroke;
        class MenuElement;
        class MenuSelectionManager;
      namespace event
      {
          class MenuDragMouseEvent;
          class MenuDragMouseListener;
          class MenuKeyEvent;
          class MenuKeyListener;
      }
      namespace plaf
      {
          class MenuItemUI;
      }
    }
  }
}

class javax::swing::JMenuItem : public ::javax::swing::AbstractButton
{

public:
  JMenuItem();
  JMenuItem(::javax::swing::Icon *);
  JMenuItem(::java::lang::String *);
  JMenuItem(::javax::swing::Action *);
  JMenuItem(::java::lang::String *, ::javax::swing::Icon *);
  JMenuItem(::java::lang::String *, jint);
public: // actually protected
  virtual void init(::java::lang::String *, ::javax::swing::Icon *);
public:
  virtual void setUI(::javax::swing::plaf::MenuItemUI *);
  virtual void updateUI();
  virtual ::java::lang::String * getUIClassID();
  virtual jboolean isArmed();
  virtual void setArmed(jboolean);
  virtual void setEnabled(jboolean);
  virtual ::javax::swing::KeyStroke * getAccelerator();
  virtual void setAccelerator(::javax::swing::KeyStroke *);
public: // actually protected
  virtual void configurePropertiesFromAction(::javax::swing::Action *);
  virtual ::java::beans::PropertyChangeListener * createActionPropertyChangeListener(::javax::swing::Action *);
public:
  virtual void processMouseEvent(::java::awt::event::MouseEvent *, JArray< ::javax::swing::MenuElement * > *, ::javax::swing::MenuSelectionManager *);
  virtual void processKeyEvent(::java::awt::event::KeyEvent *, JArray< ::javax::swing::MenuElement * > *, ::javax::swing::MenuSelectionManager *);
  virtual void processMenuDragMouseEvent(::javax::swing::event::MenuDragMouseEvent *);
  virtual void processMenuKeyEvent(::javax::swing::event::MenuKeyEvent *);
public: // actually protected
  virtual void fireMenuDragMouseEntered(::javax::swing::event::MenuDragMouseEvent *);
  virtual void fireMenuDragMouseExited(::javax::swing::event::MenuDragMouseEvent *);
  virtual void fireMenuDragMouseDragged(::javax::swing::event::MenuDragMouseEvent *);
  virtual void fireMenuDragMouseReleased(::javax::swing::event::MenuDragMouseEvent *);
  virtual void fireMenuKeyPressed(::javax::swing::event::MenuKeyEvent *);
  virtual void fireMenuKeyReleased(::javax::swing::event::MenuKeyEvent *);
  virtual void fireMenuKeyTyped(::javax::swing::event::MenuKeyEvent *);
public:
  virtual void menuSelectionChanged(jboolean);
  virtual JArray< ::javax::swing::MenuElement * > * getSubElements();
  virtual ::java::awt::Component * getComponent();
  virtual void addMenuDragMouseListener(::javax::swing::event::MenuDragMouseListener *);
  virtual void removeMenuDragMouseListener(::javax::swing::event::MenuDragMouseListener *);
  virtual JArray< ::javax::swing::event::MenuDragMouseListener * > * getMenuDragMouseListeners();
  virtual void addMenuKeyListener(::javax::swing::event::MenuKeyListener *);
  virtual void removeMenuKeyListener(::javax::swing::event::MenuKeyListener *);
  virtual JArray< ::javax::swing::event::MenuKeyListener * > * getMenuKeyListeners();
public: // actually protected
  virtual ::java::lang::String * paramString();
public:
  virtual ::javax::accessibility::AccessibleContext * getAccessibleContext();
public: // actually package-private
  virtual jboolean onTop();
private:
  static const jlong serialVersionUID = -1681004643499461044LL;
  ::javax::swing::KeyStroke * __attribute__((aligned(__alignof__( ::javax::swing::AbstractButton)))) accelerator;
  jboolean isDragging;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_JMenuItem__
