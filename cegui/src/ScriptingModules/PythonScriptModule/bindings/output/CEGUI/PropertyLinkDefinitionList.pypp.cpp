// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "python_CEGUI.h"
#include "_PropertyLinkDefinition__value_traits.pypp.hpp"
#include "PropertyLinkDefinitionList.pypp.hpp"

namespace bp = boost::python;

void register_PropertyLinkDefinitionList_class(){

    { //::std::vector< CEGUI::PropertyLinkDefinition >
        typedef bp::class_< std::vector< CEGUI::PropertyLinkDefinition > > PropertyLinkDefinitionList_exposer_t;
        PropertyLinkDefinitionList_exposer_t PropertyLinkDefinitionList_exposer = PropertyLinkDefinitionList_exposer_t( "PropertyLinkDefinitionList" );
        bp::scope PropertyLinkDefinitionList_scope( PropertyLinkDefinitionList_exposer );
        PropertyLinkDefinitionList_exposer.def( bp::indexing::vector_suite< std::vector< CEGUI::PropertyLinkDefinition > >() );
    }

}
