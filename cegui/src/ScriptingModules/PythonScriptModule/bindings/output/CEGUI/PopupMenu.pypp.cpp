// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "PopupMenu.pypp.hpp"

namespace bp = boost::python;

struct PopupMenu_wrapper : CEGUI::PopupMenu, bp::wrapper< CEGUI::PopupMenu > {

    PopupMenu_wrapper(::CEGUI::String const & type, ::CEGUI::String const & name )
    : CEGUI::PopupMenu( boost::ref(type), boost::ref(name) )
      , bp::wrapper< CEGUI::PopupMenu >(){
        // constructor
    
    }

    virtual void beginInitialisation(  ) {
        if( bp::override func_beginInitialisation = this->get_override( "beginInitialisation" ) )
            func_beginInitialisation(  );
        else{
            this->CEGUI::Window::beginInitialisation(  );
        }
    }
    
    void default_beginInitialisation(  ) {
        CEGUI::Window::beginInitialisation( );
    }

    virtual void cloneChildWidgetsTo( ::CEGUI::Window & target ) const  {
        if( bp::override func_cloneChildWidgetsTo = this->get_override( "cloneChildWidgetsTo" ) )
            func_cloneChildWidgetsTo( boost::ref(target) );
        else{
            this->CEGUI::Window::cloneChildWidgetsTo( boost::ref(target) );
        }
    }
    
    void default_cloneChildWidgetsTo( ::CEGUI::Window & target ) const  {
        CEGUI::Window::cloneChildWidgetsTo( boost::ref(target) );
    }

    virtual void clonePropertiesTo( ::CEGUI::Window & target ) const  {
        if( bp::override func_clonePropertiesTo = this->get_override( "clonePropertiesTo" ) )
            func_clonePropertiesTo( boost::ref(target) );
        else{
            this->CEGUI::Window::clonePropertiesTo( boost::ref(target) );
        }
    }
    
    void default_clonePropertiesTo( ::CEGUI::Window & target ) const  {
        CEGUI::Window::clonePropertiesTo( boost::ref(target) );
    }

    virtual void destroy(  ) {
        if( bp::override func_destroy = this->get_override( "destroy" ) )
            func_destroy(  );
        else{
            this->CEGUI::Window::destroy(  );
        }
    }
    
    void default_destroy(  ) {
        CEGUI::Window::destroy( );
    }

    virtual void endInitialisation(  ) {
        if( bp::override func_endInitialisation = this->get_override( "endInitialisation" ) )
            func_endInitialisation(  );
        else{
            this->CEGUI::ItemListBase::endInitialisation(  );
        }
    }
    
    void default_endInitialisation(  ) {
        CEGUI::ItemListBase::endInitialisation( );
    }

    virtual void fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        if( bp::override func_fireEvent = this->get_override( "fireEvent" ) )
            func_fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        else{
            this->CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        }
    }
    
    void default_fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
    }

    virtual void getRenderingContext_impl( ::CEGUI::RenderingContext & ctx ) const  {
        if( bp::override func_getRenderingContext_impl = this->get_override( "getRenderingContext_impl" ) )
            func_getRenderingContext_impl( boost::ref(ctx) );
        else{
            this->CEGUI::Window::getRenderingContext_impl( boost::ref(ctx) );
        }
    }
    
    void default_getRenderingContext_impl( ::CEGUI::RenderingContext & ctx ) const  {
        CEGUI::Window::getRenderingContext_impl( boost::ref(ctx) );
    }

    virtual ::CEGUI::Rect getUnclippedInnerRect_impl(  ) const  {
        if( bp::override func_getUnclippedInnerRect_impl = this->get_override( "getUnclippedInnerRect_impl" ) )
            return func_getUnclippedInnerRect_impl(  );
        else{
            return this->CEGUI::Window::getUnclippedInnerRect_impl(  );
        }
    }
    
    ::CEGUI::Rect default_getUnclippedInnerRect_impl(  ) const  {
        return CEGUI::Window::getUnclippedInnerRect_impl( );
    }

    virtual void initialiseComponents(  ) {
        if( bp::override func_initialiseComponents = this->get_override( "initialiseComponents" ) )
            func_initialiseComponents(  );
        else{
            this->CEGUI::ItemListBase::initialiseComponents(  );
        }
    }
    
    void default_initialiseComponents(  ) {
        CEGUI::ItemListBase::initialiseComponents( );
    }

    virtual bool isHit( ::CEGUI::Vector2 const & position, bool const allow_disabled=false ) const  {
        if( bp::override func_isHit = this->get_override( "isHit" ) )
            return func_isHit( boost::ref(position), allow_disabled );
        else{
            return this->CEGUI::Window::isHit( boost::ref(position), allow_disabled );
        }
    }
    
    bool default_isHit( ::CEGUI::Vector2 const & position, bool const allow_disabled=false ) const  {
        return CEGUI::Window::isHit( boost::ref(position), allow_disabled );
    }

    virtual void notifyItemClicked( ::CEGUI::ItemEntry * arg0 ) {
        if( bp::override func_notifyItemClicked = this->get_override( "notifyItemClicked" ) )
            func_notifyItemClicked( boost::python::ptr(arg0) );
        else{
            this->CEGUI::ItemListBase::notifyItemClicked( boost::python::ptr(arg0) );
        }
    }
    
    void default_notifyItemClicked( ::CEGUI::ItemEntry * arg0 ) {
        CEGUI::ItemListBase::notifyItemClicked( boost::python::ptr(arg0) );
    }

    virtual void notifyItemSelectState( ::CEGUI::ItemEntry * arg0, bool arg1 ) {
        if( bp::override func_notifyItemSelectState = this->get_override( "notifyItemSelectState" ) )
            func_notifyItemSelectState( boost::python::ptr(arg0), arg1 );
        else{
            this->CEGUI::ItemListBase::notifyItemSelectState( boost::python::ptr(arg0), arg1 );
        }
    }
    
    void default_notifyItemSelectState( ::CEGUI::ItemEntry * arg0, bool arg1 ) {
        CEGUI::ItemListBase::notifyItemSelectState( boost::python::ptr(arg0), arg1 );
    }

    virtual void performChildWindowLayout( bool nonclient_sized_hint=false, bool client_sized_hint=false ) {
        if( bp::override func_performChildWindowLayout = this->get_override( "performChildWindowLayout" ) )
            func_performChildWindowLayout( nonclient_sized_hint, client_sized_hint );
        else{
            this->CEGUI::ItemListBase::performChildWindowLayout( nonclient_sized_hint, client_sized_hint );
        }
    }
    
    void default_performChildWindowLayout( bool nonclient_sized_hint=false, bool client_sized_hint=false ) {
        CEGUI::ItemListBase::performChildWindowLayout( nonclient_sized_hint, client_sized_hint );
    }

    virtual void setLookNFeel( ::CEGUI::String const & look ) {
        if( bp::override func_setLookNFeel = this->get_override( "setLookNFeel" ) )
            func_setLookNFeel( boost::ref(look) );
        else{
            this->CEGUI::Window::setLookNFeel( boost::ref(look) );
        }
    }
    
    void default_setLookNFeel( ::CEGUI::String const & look ) {
        CEGUI::Window::setLookNFeel( boost::ref(look) );
    }

    virtual void setMargin( ::CEGUI::UBox const & margin ) {
        if( bp::override func_setMargin = this->get_override( "setMargin" ) )
            func_setMargin( boost::ref(margin) );
        else{
            this->CEGUI::Window::setMargin( boost::ref(margin) );
        }
    }
    
    void default_setMargin( ::CEGUI::UBox const & margin ) {
        CEGUI::Window::setMargin( boost::ref(margin) );
    }

    virtual void sizeToContent(  ) {
        if( bp::override func_sizeToContent = this->get_override( "sizeToContent" ) )
            func_sizeToContent(  );
        else{
            this->CEGUI::ItemListBase::sizeToContent(  );
        }
    }
    
    void default_sizeToContent(  ) {
        CEGUI::ItemListBase::sizeToContent( );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
    }

    virtual void update( float elapsed ) {
        if( bp::override func_update = this->get_override( "update" ) )
            func_update( elapsed );
        else{
            this->CEGUI::Window::update( elapsed );
        }
    }
    
    void default_update( float elapsed ) {
        CEGUI::Window::update( elapsed );
    }

    virtual void writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::ref(xml_stream) );
        else{
            this->CEGUI::Window::writeXMLToStream( boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::Window::writeXMLToStream( boost::ref(xml_stream) );
    }

};

void register_PopupMenu_class(){

    { //::CEGUI::PopupMenu
        typedef bp::class_< PopupMenu_wrapper, bp::bases< CEGUI::MenuBase >, boost::noncopyable > PopupMenu_exposer_t;
        PopupMenu_exposer_t PopupMenu_exposer = PopupMenu_exposer_t( "PopupMenu", "*!\n\
        \n\
            Base class for popup menus\n\
        *\n", bp::init< CEGUI::String const &, CEGUI::String const & >(( bp::arg("type"), bp::arg("name") ), "*************************************************************************\n\
            Construction and Destruction\n\
        *************************************************************************\n\
        *!\n\
        \n\
            Constructor for PopupMenu objects\n\
        *\n") );
        bp::scope PopupMenu_scope( PopupMenu_exposer );
        { //::CEGUI::PopupMenu::closePopupMenu
        
            typedef void ( ::CEGUI::PopupMenu::*closePopupMenu_function_type )( bool ) ;
            
            PopupMenu_exposer.def( 
                "closePopupMenu"
                , closePopupMenu_function_type( &::CEGUI::PopupMenu::closePopupMenu )
                , ( bp::arg("notify")=(bool)(true) )
                , "*!\n\
                \n\
                    Tells the popup menu to close.\n\
            \n\
                @param notify\n\
                    true if the parent menu item (if any) is to handle the closing. false if not.\n\
                *\n" );
        
        }
        { //::CEGUI::PopupMenu::getFadeInTime
        
            typedef float ( ::CEGUI::PopupMenu::*getFadeInTime_function_type )(  ) const;
            
            PopupMenu_exposer.def( 
                "getFadeInTime"
                , getFadeInTime_function_type( &::CEGUI::PopupMenu::getFadeInTime )
                , "*************************************************************************\n\
                    Accessor type functions\n\
                *************************************************************************\n\
                *!\n\
                \n\
                    Get the fade in time for this popup menu.\n\
            \n\
                @return\n\
                    The time in seconds that it takes for the popup to fade in.\n\
                    0 if fading is disabled.\n\
                *\n" );
        
        }
        { //::CEGUI::PopupMenu::getFadeOutTime
        
            typedef float ( ::CEGUI::PopupMenu::*getFadeOutTime_function_type )(  ) const;
            
            PopupMenu_exposer.def( 
                "getFadeOutTime"
                , getFadeOutTime_function_type( &::CEGUI::PopupMenu::getFadeOutTime )
                , "*!\n\
                \n\
                    Get the fade out time for this popup menu.\n\
            \n\
                @return\n\
                    The time in seconds that it takes for the popup to fade out.\n\
                    0 if fading is disabled.\n\
                *\n" );
        
        }
        { //::CEGUI::PopupMenu::isPopupMenuOpen
        
            typedef bool ( ::CEGUI::PopupMenu::*isPopupMenuOpen_function_type )(  ) const;
            
            PopupMenu_exposer.def( 
                "isPopupMenuOpen"
                , isPopupMenuOpen_function_type( &::CEGUI::PopupMenu::isPopupMenuOpen )
                , "*!\n\
            \n\
                Find out if this popup menu is open or closed;\n\
            *\n" );
        
        }
        { //::CEGUI::PopupMenu::openPopupMenu
        
            typedef void ( ::CEGUI::PopupMenu::*openPopupMenu_function_type )( bool ) ;
            
            PopupMenu_exposer.def( 
                "openPopupMenu"
                , openPopupMenu_function_type( &::CEGUI::PopupMenu::openPopupMenu )
                , ( bp::arg("notify")=(bool)(true) )
                , "*!\n\
                \n\
                    Tells the popup menu to open.\n\
            \n\
                @param notify\n\
                    true if the parent menu item (if any) is to handle the opening. false if not.\n\
                *\n" );
        
        }
        { //::CEGUI::PopupMenu::setFadeInTime
        
            typedef void ( ::CEGUI::PopupMenu::*setFadeInTime_function_type )( float ) ;
            
            PopupMenu_exposer.def( 
                "setFadeInTime"
                , setFadeInTime_function_type( &::CEGUI::PopupMenu::setFadeInTime )
                , ( bp::arg("fadetime") )
                , "*************************************************************************\n\
                    Manipulators\n\
                *************************************************************************\n\
                *!\n\
                \n\
                    Set the fade in time for this popup menu.\n\
            \n\
                @param fadetime\n\
                    The time in seconds that it takes for the popup to fade in.\n\
                    If this parameter is zero, fading is disabled.\n\
                *\n" );
        
        }
        { //::CEGUI::PopupMenu::setFadeOutTime
        
            typedef void ( ::CEGUI::PopupMenu::*setFadeOutTime_function_type )( float ) ;
            
            PopupMenu_exposer.def( 
                "setFadeOutTime"
                , setFadeOutTime_function_type( &::CEGUI::PopupMenu::setFadeOutTime )
                , ( bp::arg("fadetime") )
                , "*!\n\
                \n\
                    Set the fade out time for this popup menu.\n\
            \n\
                @param fadetime\n\
                    The time in seconds that it takes for the popup to fade out.\n\
                    If this parameter is zero, fading is disabled.\n\
                *\n" );
        
        }
        { //::CEGUI::Window::beginInitialisation
        
            typedef void ( ::CEGUI::Window::*beginInitialisation_function_type )(  ) ;
            typedef void ( PopupMenu_wrapper::*default_beginInitialisation_function_type )(  ) ;
            
            PopupMenu_exposer.def( 
                "beginInitialisation"
                , beginInitialisation_function_type(&::CEGUI::Window::beginInitialisation)
                , default_beginInitialisation_function_type(&PopupMenu_wrapper::default_beginInitialisation) );
        
        }
        { //::CEGUI::Window::cloneChildWidgetsTo
        
            typedef void ( ::CEGUI::Window::*cloneChildWidgetsTo_function_type )( ::CEGUI::Window & ) const;
            typedef void ( PopupMenu_wrapper::*default_cloneChildWidgetsTo_function_type )( ::CEGUI::Window & ) const;
            
            PopupMenu_exposer.def( 
                "cloneChildWidgetsTo"
                , cloneChildWidgetsTo_function_type(&::CEGUI::Window::cloneChildWidgetsTo)
                , default_cloneChildWidgetsTo_function_type(&PopupMenu_wrapper::default_cloneChildWidgetsTo)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::Window::clonePropertiesTo
        
            typedef void ( ::CEGUI::Window::*clonePropertiesTo_function_type )( ::CEGUI::Window & ) const;
            typedef void ( PopupMenu_wrapper::*default_clonePropertiesTo_function_type )( ::CEGUI::Window & ) const;
            
            PopupMenu_exposer.def( 
                "clonePropertiesTo"
                , clonePropertiesTo_function_type(&::CEGUI::Window::clonePropertiesTo)
                , default_clonePropertiesTo_function_type(&PopupMenu_wrapper::default_clonePropertiesTo)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::Window::destroy
        
            typedef void ( ::CEGUI::Window::*destroy_function_type )(  ) ;
            typedef void ( PopupMenu_wrapper::*default_destroy_function_type )(  ) ;
            
            PopupMenu_exposer.def( 
                "destroy"
                , destroy_function_type(&::CEGUI::Window::destroy)
                , default_destroy_function_type(&PopupMenu_wrapper::default_destroy) );
        
        }
        { //::CEGUI::ItemListBase::endInitialisation
        
            typedef void ( ::CEGUI::ItemListBase::*endInitialisation_function_type )(  ) ;
            typedef void ( PopupMenu_wrapper::*default_endInitialisation_function_type )(  ) ;
            
            PopupMenu_exposer.def( 
                "endInitialisation"
                , endInitialisation_function_type(&::CEGUI::ItemListBase::endInitialisation)
                , default_endInitialisation_function_type(&PopupMenu_wrapper::default_endInitialisation) );
        
        }
        { //::CEGUI::EventSet::fireEvent
        
            typedef void ( ::CEGUI::EventSet::*fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            typedef void ( PopupMenu_wrapper::*default_fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            
            PopupMenu_exposer.def( 
                "fireEvent"
                , fireEvent_function_type(&::CEGUI::EventSet::fireEvent)
                , default_fireEvent_function_type(&PopupMenu_wrapper::default_fireEvent)
                , ( bp::arg("name"), bp::arg("args"), bp::arg("eventNamespace")="" ) );
        
        }
        { //::CEGUI::Window::getRenderedStringParser
        
            typedef ::CEGUI::RenderedStringParser & ( ::CEGUI::Window::*getRenderedStringParser_function_type )(  ) const;
            
            PopupMenu_exposer.def( 
                "getRenderedStringParser"
                , getRenderedStringParser_function_type(&::CEGUI::Window::getRenderedStringParser)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::Window::getRenderingContext_impl
        
            typedef void ( ::CEGUI::Window::*getRenderingContext_impl_function_type )( ::CEGUI::RenderingContext & ) const;
            typedef void ( PopupMenu_wrapper::*default_getRenderingContext_impl_function_type )( ::CEGUI::RenderingContext & ) const;
            
            PopupMenu_exposer.def( 
                "getRenderingContext_impl"
                , getRenderingContext_impl_function_type(&::CEGUI::Window::getRenderingContext_impl)
                , default_getRenderingContext_impl_function_type(&PopupMenu_wrapper::default_getRenderingContext_impl)
                , ( bp::arg("ctx") ) );
        
        }
        { //::CEGUI::Window::getUnclippedInnerRect_impl
        
            typedef ::CEGUI::Rect ( ::CEGUI::Window::*getUnclippedInnerRect_impl_function_type )(  ) const;
            typedef ::CEGUI::Rect ( PopupMenu_wrapper::*default_getUnclippedInnerRect_impl_function_type )(  ) const;
            
            PopupMenu_exposer.def( 
                "getUnclippedInnerRect_impl"
                , getUnclippedInnerRect_impl_function_type(&::CEGUI::Window::getUnclippedInnerRect_impl)
                , default_getUnclippedInnerRect_impl_function_type(&PopupMenu_wrapper::default_getUnclippedInnerRect_impl) );
        
        }
        { //::CEGUI::ItemListBase::initialiseComponents
        
            typedef void ( ::CEGUI::ItemListBase::*initialiseComponents_function_type )(  ) ;
            typedef void ( PopupMenu_wrapper::*default_initialiseComponents_function_type )(  ) ;
            
            PopupMenu_exposer.def( 
                "initialiseComponents"
                , initialiseComponents_function_type(&::CEGUI::ItemListBase::initialiseComponents)
                , default_initialiseComponents_function_type(&PopupMenu_wrapper::default_initialiseComponents) );
        
        }
        { //::CEGUI::Window::isHit
        
            typedef bool ( ::CEGUI::Window::*isHit_function_type )( ::CEGUI::Vector2 const &,bool const ) const;
            typedef bool ( PopupMenu_wrapper::*default_isHit_function_type )( ::CEGUI::Vector2 const &,bool const ) const;
            
            PopupMenu_exposer.def( 
                "isHit"
                , isHit_function_type(&::CEGUI::Window::isHit)
                , default_isHit_function_type(&PopupMenu_wrapper::default_isHit)
                , ( bp::arg("position"), bp::arg("allow_disabled")=(bool const)(false) ) );
        
        }
        { //::CEGUI::ItemListBase::notifyItemClicked
        
            typedef void ( ::CEGUI::ItemListBase::*notifyItemClicked_function_type )( ::CEGUI::ItemEntry * ) ;
            typedef void ( PopupMenu_wrapper::*default_notifyItemClicked_function_type )( ::CEGUI::ItemEntry * ) ;
            
            PopupMenu_exposer.def( 
                "notifyItemClicked"
                , notifyItemClicked_function_type(&::CEGUI::ItemListBase::notifyItemClicked)
                , default_notifyItemClicked_function_type(&PopupMenu_wrapper::default_notifyItemClicked)
                , ( bp::arg("arg0") ) );
        
        }
        { //::CEGUI::ItemListBase::notifyItemSelectState
        
            typedef void ( ::CEGUI::ItemListBase::*notifyItemSelectState_function_type )( ::CEGUI::ItemEntry *,bool ) ;
            typedef void ( PopupMenu_wrapper::*default_notifyItemSelectState_function_type )( ::CEGUI::ItemEntry *,bool ) ;
            
            PopupMenu_exposer.def( 
                "notifyItemSelectState"
                , notifyItemSelectState_function_type(&::CEGUI::ItemListBase::notifyItemSelectState)
                , default_notifyItemSelectState_function_type(&PopupMenu_wrapper::default_notifyItemSelectState)
                , ( bp::arg("arg0"), bp::arg("arg1") ) );
        
        }
        { //::CEGUI::ItemListBase::performChildWindowLayout
        
            typedef void ( ::CEGUI::ItemListBase::*performChildWindowLayout_function_type )( bool,bool ) ;
            typedef void ( PopupMenu_wrapper::*default_performChildWindowLayout_function_type )( bool,bool ) ;
            
            PopupMenu_exposer.def( 
                "performChildWindowLayout"
                , performChildWindowLayout_function_type(&::CEGUI::ItemListBase::performChildWindowLayout)
                , default_performChildWindowLayout_function_type(&PopupMenu_wrapper::default_performChildWindowLayout)
                , ( bp::arg("nonclient_sized_hint")=(bool)(false), bp::arg("client_sized_hint")=(bool)(false) ) );
        
        }
        { //::CEGUI::Window::setLookNFeel
        
            typedef void ( ::CEGUI::Window::*setLookNFeel_function_type )( ::CEGUI::String const & ) ;
            typedef void ( PopupMenu_wrapper::*default_setLookNFeel_function_type )( ::CEGUI::String const & ) ;
            
            PopupMenu_exposer.def( 
                "setLookNFeel"
                , setLookNFeel_function_type(&::CEGUI::Window::setLookNFeel)
                , default_setLookNFeel_function_type(&PopupMenu_wrapper::default_setLookNFeel)
                , ( bp::arg("look") ) );
        
        }
        { //::CEGUI::Window::setMargin
        
            typedef void ( ::CEGUI::Window::*setMargin_function_type )( ::CEGUI::UBox const & ) ;
            typedef void ( PopupMenu_wrapper::*default_setMargin_function_type )( ::CEGUI::UBox const & ) ;
            
            PopupMenu_exposer.def( 
                "setMargin"
                , setMargin_function_type(&::CEGUI::Window::setMargin)
                , default_setMargin_function_type(&PopupMenu_wrapper::default_setMargin)
                , ( bp::arg("margin") ) );
        
        }
        { //::CEGUI::ItemListBase::sizeToContent
        
            typedef void ( ::CEGUI::ItemListBase::*sizeToContent_function_type )(  ) ;
            typedef void ( PopupMenu_wrapper::*default_sizeToContent_function_type )(  ) ;
            
            PopupMenu_exposer.def( 
                "sizeToContent"
                , sizeToContent_function_type(&::CEGUI::ItemListBase::sizeToContent)
                , default_sizeToContent_function_type(&PopupMenu_wrapper::default_sizeToContent) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( PopupMenu_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            PopupMenu_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&PopupMenu_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( PopupMenu_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            
            PopupMenu_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&PopupMenu_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("group"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::Window::update
        
            typedef void ( ::CEGUI::Window::*update_function_type )( float ) ;
            typedef void ( PopupMenu_wrapper::*default_update_function_type )( float ) ;
            
            PopupMenu_exposer.def( 
                "update"
                , update_function_type(&::CEGUI::Window::update)
                , default_update_function_type(&PopupMenu_wrapper::default_update)
                , ( bp::arg("elapsed") ) );
        
        }
        { //::CEGUI::Window::writeXMLToStream
        
            typedef void ( ::CEGUI::Window::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            typedef void ( PopupMenu_wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PopupMenu_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::Window::writeXMLToStream)
                , default_writeXMLToStream_function_type(&PopupMenu_wrapper::default_writeXMLToStream)
                , ( bp::arg("xml_stream") ) );
        
        }
    }

}
