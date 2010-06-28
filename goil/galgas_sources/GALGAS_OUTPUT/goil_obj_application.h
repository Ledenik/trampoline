//---------------------------------------------------------------------------*
//                                                                           *
//                      File 'goil_obj_application.h'                        *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                      june 27th, 2010, at 20h10'22"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_obj_application_ENTITIES_DEFINED
#define goil_obj_application_ENTITIES_DEFINED

//---------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------*

#include "goil_lexique.h"

//---------------------------------------------------------------------------*

#include "goil_types_app.h"
#include "goil_basic_types.h"

//---------------------------------------------------------------------------*

class GALGAS_basic_5F_type ;
class GALGAS_string ;
class GALGAS_uint ;
class GALGAS_uint_36__34_ ;
class GALGAS_luint_36__34_ ;
class GALGAS_lstring ;
class GALGAS_lbool ;
class GALGAS_bool ;
class GALGAS_uint_36__34__5F_class ;
class GALGAS_object ;
class GALGAS_type ;
class GALGAS_enumerable ;
class GALGAS_class ;
class GALGAS_struct ;
class GALGAS_enum ;
class GALGAS_mapproxy ;
class GALGAS_location ;
class GALGAS_functionlist ;
class GALGAS_function ;
class GALGAS_typelist ;
class GALGAS_objectlist ;
class GALGAS_binaryset ;
class GALGAS_uint_36__34_list ;
class GALGAS_stringlist ;
class GALGAS_luint ;
class GALGAS_lsint ;
class GALGAS_sint ;
class GALGAS_lsint_36__34_ ;
class GALGAS_sint_36__34_ ;
class GALGAS_lchar ;
class GALGAS_char ;
class GALGAS_ldouble ;
class GALGAS_double ;
class GALGAS_app_5F_trusted_5F_obj ;
class GALGAS_number_5F_set ;
class GALGAS_imp_5F_type ;
class GALGAS_oil_5F_obj ;
class GALGAS_autostart_5F_obj ;
class GALGAS_list ;
class GALGAS_sortedlist ;
class GALGAS_map ;
class GALGAS_listmap ;
class GALGAS_stringset ;
class GALGAS_data ;
class GALGAS_imp_5F_sca_5F_type ;
class GALGAS_imp_5F_obj_5F_ref ;
class GALGAS_void_5F_type ;
class GALGAS_list_5F_uint_33__32_ ;
class GALGAS_list_5F_sint_33__32_ ;
class GALGAS_list_5F_uint_36__34_ ;
class GALGAS_list_5F_sint_36__34_ ;
class GALGAS_ident_5F_list ;
class GALGAS_luintlist ;
class GALGAS_uintlist ;
class GALGAS_lstringlist ;
class GALGAS_app_5F_map ;
class GALGAS_app_5F_obj ;
class GALGAS_ident_5F_map ;
class GALGAS_stringMap ;
class GALGAS_lstringMap ;
class GALGAS_prefix_5F_map ;
class GALGAS_stringset_5F_map ;
class GALGAS_ident_5F_list_5F_map ;
class GALGAS_uint_33__32__5F_set ;
class GALGAS_sint_33__32__5F_set ;
class GALGAS_uint_36__34__5F_set ;
class GALGAS_sint_36__34__5F_set ;
class GALGAS_float_5F_set ;
class GALGAS_sint_33__32__5F_empty_5F_set ;
class GALGAS_sint_33__32__5F_range ;
class GALGAS_sint_33__32__5F_list ;
class GALGAS_sint_36__34__5F_empty_5F_set ;
class GALGAS_sint_36__34__5F_range ;
class GALGAS_sint_36__34__5F_list ;
class GALGAS_uint_33__32__5F_empty_5F_set ;
class GALGAS_uint_33__32__5F_range ;
class GALGAS_uint_33__32__5F_list ;
class GALGAS_uint_36__34__5F_empty_5F_set ;
class GALGAS_uint_36__34__5F_range ;
class GALGAS_uint_36__34__5F_list ;
class GALGAS_app_5F_trusted_5F_void ;
class GALGAS_app_5F_trusted_5F_false ;
class GALGAS_app_5F_trusted_5F_true ;
class GALGAS_autostart_5F_void ;
class GALGAS_autostart_5F_false ;
class GALGAS_void ;
class GALGAS_uint_33__32__5F_class ;
class GALGAS_sint_33__32__5F_class ;
class GALGAS_sint_36__34__5F_class ;
class GALGAS_float_5F_class ;
class GALGAS_string_5F_class ;
class GALGAS_bool_5F_class ;
class GALGAS_void_5F_bool_5F_class ;
class GALGAS_auto_5F_bool_5F_class ;
class GALGAS_void_5F_float_5F_class ;
class GALGAS_float_5F_empty_5F_set ;
class GALGAS_uint_33__32__5F_type ;
class GALGAS_sint_33__32__5F_type ;
class GALGAS_uint_36__34__5F_type ;
class GALGAS_sint_36__34__5F_type ;
class GALGAS_void_5F_sint_33__32__5F_class ;
class GALGAS_auto_5F_sint_33__32__5F_class ;
class GALGAS_void_5F_sint_36__34__5F_class ;
class GALGAS_auto_5F_sint_36__34__5F_class ;
class GALGAS_void_5F_string_5F_class ;
class GALGAS_auto_5F_string_5F_class ;
class GALGAS_void_5F_uint_33__32__5F_class ;
class GALGAS_auto_5F_uint_33__32__5F_class ;
class GALGAS_void_5F_uint_36__34__5F_class ;
class GALGAS_auto_5F_uint_36__34__5F_class ;

//---------------------------------------------------------------------------*
//                                                                           *
//              Parser class 'goil_obj_application' declaration              *
//                                                                           *
//---------------------------------------------------------------------------*

class cParser_goil_5F_obj_5F_application {
//--- Virtual destructor
  public : virtual ~ cParser_goil_5F_obj_5F_application (void) {}

//--- Non terminal declarations
  protected : virtual void nt_app_5F_attributes_ (GALGASap_app_5F_obj & ioArgument0,
                                                  GALGASap_lstring inArgument1,
                                                  C_Lexique_goil_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_app_5F_attributes_parse (C_Lexique_goil_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_appli_ (GALGASap_app_5F_map & ioArgument0,
                                      C_Lexique_goil_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_appli_check_5F_appli_5F_exist (GALGASap_app_5F_map & ioArgument0,
                                                             GALGASap_bool & outArgument1,
                                                             C_Lexique_goil_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_description_ (GALGASap_lstring & outArgument0,
                                            C_Lexique_goil_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_description_parse (C_Lexique_goil_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_trusted_5F_fcts_ (GALGASap_app_5F_trusted_5F_obj & outArgument0,
                                                C_Lexique_goil_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_trusted_5F_fcts_parse (C_Lexique_goil_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_goil_5F_obj_5F_application_appli_i0_ (GALGASap_app_5F_map & ioArgument0,
                                                              C_Lexique_goil_5F_lexique * inLexique) ;

  protected : void rule_goil_5F_obj_5F_application_appli_i0_check_5F_appli_5F_exist (GALGASap_app_5F_map & ioArgument0,
                                                                                     GALGASap_bool & outArgument1,
                                                                                     C_Lexique_goil_5F_lexique * inLexique) ;

  protected : void rule_goil_5F_obj_5F_application_app_5F_attributes_i1_ (GALGASap_app_5F_obj & ioArgument0,
                                                                          GALGASap_lstring inArgument1,
                                                                          C_Lexique_goil_5F_lexique * inLexique) ;

  protected : void rule_goil_5F_obj_5F_application_app_5F_attributes_i1_parse (C_Lexique_goil_5F_lexique * inLexique) ;

  protected : void rule_goil_5F_obj_5F_application_trusted_5F_fcts_i2_ (GALGASap_app_5F_trusted_5F_obj & outArgument0,
                                                                        C_Lexique_goil_5F_lexique * inLexique) ;

  protected : void rule_goil_5F_obj_5F_application_trusted_5F_fcts_i2_parse (C_Lexique_goil_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual PMSInt32 select_goil_5F_obj_5F_application_0 (C_Lexique_goil_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_goil_5F_obj_5F_application_1 (C_Lexique_goil_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_goil_5F_obj_5F_application_2 (C_Lexique_goil_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_goil_5F_obj_5F_application_3 (C_Lexique_goil_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_goil_5F_obj_5F_application_4 (C_Lexique_goil_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_goil_5F_obj_5F_application_5 (C_Lexique_goil_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_goil_5F_obj_5F_application_6 (C_Lexique_goil_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_goil_5F_obj_5F_application_7 (C_Lexique_goil_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_goil_5F_obj_5F_application_8 (C_Lexique_goil_5F_lexique *) = 0 ;


} ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

#endif
