//---------------------------------------------------------------------------*
//                                                                           *
//                         File 'goil_obj_isr.cpp'                           *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                      june 17th, 2010, at 18h54'32"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#include "version_libpm.h"
#if CURRENT_LIBPM_VERSION != VERSION_OF_LIBPM_USED_BY_GALGAS_COMPILER
  #error "This file has been compiled with a version of GALGAS that uses libpm version VERSION_OF_LIBPM_USED_BY_GALGAS_COMPILER, different than the current version (CURRENT_LIBPM_VERSION) of libpm"
#endif

//---------------------------------------------------------------------------*

#include "goil_obj_isr.h"
#include "galgas/C_galgas_CLI_Options.h"

//---------------------------------------------------------------------------*

#include "goil_options.h"
#include "template_grammar.h"
#include "cfg_grammar.h"
#include "api_grammar.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_obj_isr.gSyntax", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

void cParser_goil_5F_obj_5F_isr::rule_goil_5F_obj_5F_isr_isr_i0_ (GALGASap_isr_5F_map & ioArgument_isrs,
                                                                  C_Lexique_goil_5F_lexique * inCompiler) {
  //-------- @localVariableDeclarationForGeneration
  GALGASap_lstring var_isr_5F_name ;
  //-------- @localVariableDeclarationForGeneration
  GALGASap_isr_5F_obj var_isr ;
  //-------- @localVariableDeclarationForGeneration
  GALGASap_basic_5F_type var_category ;
  //-------- @localVariableDeclarationForGeneration
  GALGASap_basic_5F_type var_priority ;
  //-------- @localVariableDeclarationForGeneration
  GALGASap_lstring var_desc ;
  //-------- @localVariableDeclarationForGeneration
  GALGASap_lstringlist var_resources ;
  //-------- @localVariableDeclarationForGeneration
  GALGASap_lstringlist var_messages ;
  //-------- @localVariableDeclarationForGeneration
  GALGASap_lstringlist var_acc_5F_apps ;
  //-------- @localVariableDeclarationForGeneration
  GALGASap_timing_5F_prot var_timing_5F_prot ;
  //-------- @localVariableDeclarationForGeneration
  GALGASap_ident_5F_map var_other_5F_fields ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_ISR) COMMA_SOURCE_FILE_AT_LINE (86)) ;
  //-------- @terminalCheckInstructionForGeneration
  var_isr_5F_name = inCompiler->synthetizedAttribute_att_5F_token () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (86)) ;
  //-------- @ifInstructionForGeneration
  //--- @readerCallExpressionForGeneration
  //--- @readerCallExpressionForGeneration
  GALGASap_string temp_0 (var_isr_5F_name.readerCall_string (SOURCE_FILE_AT_LINE (87))) ;
  GALGASap_bool temp_1 (ioArgument_isrs.readerCall_hasKey (temp_0 COMMA_SOURCE_FILE_AT_LINE (87))) ;
  if (isValidAndTrue (temp_1)) {
    { //-------- @modifierCallInstructionForGeneration
    ioArgument_isrs.modifierCall_del (var_isr_5F_name, var_isr, inCompiler COMMA_SOURCE_FILE_AT_LINE (88)) ;
    } //-------- END @typeMethodInstructionForGeneration
    //-------- @assignmentInstructionForGeneration
    //--- @readerCallExpressionForGeneration
    GALGASap_basic_5F_type temp_2 (var_isr.readerCall_category (SOURCE_FILE_AT_LINE (89))) ;
    var_category = temp_2 ;
    //-------- @assignmentInstructionForGeneration
    //--- @readerCallExpressionForGeneration
    GALGASap_basic_5F_type temp_3 (var_isr.readerCall_priority (SOURCE_FILE_AT_LINE (90))) ;
    var_priority = temp_3 ;
    //-------- @assignmentInstructionForGeneration
    //--- @readerCallExpressionForGeneration
    GALGASap_lstring temp_4 (var_isr.readerCall_desc (SOURCE_FILE_AT_LINE (91))) ;
    var_desc = temp_4 ;
    //-------- @assignmentInstructionForGeneration
    //--- @readerCallExpressionForGeneration
    GALGASap_lstringlist temp_5 (var_isr.readerCall_resources (SOURCE_FILE_AT_LINE (92))) ;
    var_resources = temp_5 ;
    //-------- @assignmentInstructionForGeneration
    //--- @readerCallExpressionForGeneration
    GALGASap_lstringlist temp_6 (var_isr.readerCall_messages (SOURCE_FILE_AT_LINE (93))) ;
    var_messages = temp_6 ;
    //-------- @assignmentInstructionForGeneration
    //--- @readerCallExpressionForGeneration
    GALGASap_lstringlist temp_7 (var_isr.readerCall_acc_5F_apps (SOURCE_FILE_AT_LINE (94))) ;
    var_acc_5F_apps = temp_7 ;
    //-------- @assignmentInstructionForGeneration
    //--- @readerCallExpressionForGeneration
    GALGASap_timing_5F_prot temp_8 (var_isr.readerCall_timing_5F_prot (SOURCE_FILE_AT_LINE (95))) ;
    var_timing_5F_prot = temp_8 ;
    //-------- @assignmentInstructionForGeneration
    //--- @readerCallExpressionForGeneration
    GALGASap_ident_5F_map temp_9 (var_isr.readerCall_other_5F_fields (SOURCE_FILE_AT_LINE (96))) ;
    var_other_5F_fields = temp_9 ;
  }else{
    //-------- @assignmentInstructionForGeneration
    GALGASap_location temp_10 (inCompiler->here (SOURCE_FILE_AT_LINE (98))) ;
    GALGASap_void temp_11 (GALGASap_void::constructor_new (temp_10 COMMA_SOURCE_FILE_AT_LINE (98))) ;
    var_category = temp_11 ;
    //-------- @assignmentInstructionForGeneration
    GALGASap_location temp_12 (inCompiler->here (SOURCE_FILE_AT_LINE (99))) ;
    GALGASap_void temp_13 (GALGASap_void::constructor_new (temp_12 COMMA_SOURCE_FILE_AT_LINE (99))) ;
    var_priority = temp_13 ;
    //-------- @assignmentInstructionForGeneration
    //--- @literalStringExpressionForGeneration
    GALGASap_string temp_14 ("" COMMA_SOURCE_FILE_AT_LINE (100)) ;
    GALGASap_location temp_15 (inCompiler->here (SOURCE_FILE_AT_LINE (100))) ;
    GALGASap_lstring temp_16 (GALGASap_lstring::constructor_new (temp_14, temp_15 COMMA_SOURCE_FILE_AT_LINE (100))) ;
    var_desc = temp_16 ;
    //-------- @assignmentInstructionForGeneration
    GALGASap_lstringlist temp_17 (GALGASap_lstringlist::constructor_emptyList (SOURCE_FILE_AT_LINE (101))) ;
    var_resources = temp_17 ;
    //-------- @assignmentInstructionForGeneration
    GALGASap_lstringlist temp_18 (GALGASap_lstringlist::constructor_emptyList (SOURCE_FILE_AT_LINE (102))) ;
    var_messages = temp_18 ;
    //-------- @assignmentInstructionForGeneration
    GALGASap_lstringlist temp_19 (GALGASap_lstringlist::constructor_emptyList (SOURCE_FILE_AT_LINE (103))) ;
    var_acc_5F_apps = temp_19 ;
    //-------- @assignmentInstructionForGeneration
    GALGASap_location temp_20 (inCompiler->here (SOURCE_FILE_AT_LINE (104))) ;
    GALGASap_void_5F_timing_5F_prot temp_21 (GALGASap_void_5F_timing_5F_prot::constructor_new (temp_20 COMMA_SOURCE_FILE_AT_LINE (104))) ;
    var_timing_5F_prot = temp_21 ;
    //-------- @assignmentInstructionForGeneration
    GALGASap_ident_5F_map temp_22 (GALGASap_ident_5F_map::constructor_emptyMap (SOURCE_FILE_AT_LINE (105))) ;
    var_other_5F_fields = temp_22 ;
    //-------- @assignmentInstructionForGeneration
    GALGASap_isr_5F_obj temp_23 (GALGASap_isr_5F_obj::constructor_new (var_desc, var_category, var_priority, var_resources, var_messages, var_acc_5F_apps, var_timing_5F_prot, var_other_5F_fields COMMA_SOURCE_FILE_AT_LINE (106))) ;
    var_isr = temp_23 ;
  }
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE_AT_LINE (108)) ;
  //-------- @nonterminalInstructionForGeneration
  nt_isr_5F_attributes_ (var_category, var_priority, var_resources, var_messages, var_acc_5F_apps, var_timing_5F_prot, var_other_5F_fields, inCompiler) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE_AT_LINE (110)) ;
  //-------- @nonterminalInstructionForGeneration
  nt_description_ (var_desc, inCompiler) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (112)) ;
  //-------- @assignmentInstructionForGeneration
  GALGASap_isr_5F_obj temp_24 (GALGASap_isr_5F_obj::constructor_new (var_desc, var_category, var_priority, var_resources, var_messages, var_acc_5F_apps, var_timing_5F_prot, var_other_5F_fields COMMA_SOURCE_FILE_AT_LINE (114))) ;
  var_isr = temp_24 ;
  { //-------- @modifierCallInstructionForGeneration
  ioArgument_isrs.modifierCall_put (var_isr_5F_name, var_isr, inCompiler COMMA_SOURCE_FILE_AT_LINE (115)) ;
  } //-------- END @typeMethodInstructionForGeneration
}

void cParser_goil_5F_obj_5F_isr::rule_goil_5F_obj_5F_isr_isr_i0_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_ISR) COMMA_SOURCE_FILE_AT_LINE (86)) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (86)) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE_AT_LINE (108)) ;
  //-------- @nonterminalInstructionForGeneration
  nt_isr_5F_attributes_parse (inCompiler) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE_AT_LINE (110)) ;
  //-------- @nonterminalInstructionForGeneration
  nt_description_parse (inCompiler) ;
  //-------- @terminalCheckInstructionForGeneration
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (112)) ;
  inCompiler->resetTemplateString () ;
}

void cParser_goil_5F_obj_5F_isr::rule_goil_5F_obj_5F_isr_isr_5F_attributes_i1_ (GALGASap_basic_5F_type & ioArgument_category,
                                                                                GALGASap_basic_5F_type & ioArgument_priority,
                                                                                GALGASap_lstringlist & ioArgument_resources,
                                                                                GALGASap_lstringlist & ioArgument_messages,
                                                                                GALGASap_lstringlist & ioArgument_acc_5F_apps,
                                                                                GALGASap_timing_5F_prot & ioArgument_timing_5F_prot,
                                                                                GALGASap_ident_5F_map & ioArgument_other_5F_fields,
                                                                                C_Lexique_goil_5F_lexique * inCompiler) {
  //-------- @repeatInstructionForGeneration
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_goil_5F_obj_5F_isr_0 (inCompiler)) {
    case 2: {
      //-------- @localVariableDeclarationForGeneration
      GALGASap_luint_36__34_ var_cat ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_CATEGORY) COMMA_SOURCE_FILE_AT_LINE (130)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (130)) ;
      //-------- @terminalCheckInstructionForGeneration
      var_cat = inCompiler->synthetizedAttribute_integerNumber () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_SOURCE_FILE_AT_LINE (130)) ;
      //-------- @nonterminalInstructionForGeneration
      GALGASap_lstring joker_3387_0 ; // Joker input parameter
      nt_description_ (joker_3387_0, inCompiler) ;
      joker_3387_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (130)) ;
      //-------- @structuredCastInstructionForGeneration
      if (ioArgument_category.isValid ()) {
        if (ioArgument_category.ptr (HERE)->typeDescriptor () == & kTypeDescriptor_GALGAS_uint_36__34__5F_class) {
          //-------- @errorInstructionForGeneration
          GALGASap_location temp_1 (inCompiler->here (SOURCE_FILE_AT_LINE (133))) ;
          //--- @literalStringExpressionForGeneration
          GALGASap_string temp_2 ("ISR category attribute already defined for this ISR" COMMA_SOURCE_FILE_AT_LINE (133)) ;
          inCompiler->emitSemanticError (temp_1, temp_2 COMMA_SOURCE_FILE_AT_LINE (133)) ;
          //-------- @errorInstructionForGeneration
          //--- @readerCallExpressionForGeneration
          GALGASap_location temp_3 (ioArgument_category.readerCall_location (SOURCE_FILE_AT_LINE (134))) ;
          //--- @literalStringExpressionForGeneration
          GALGASap_string temp_4 ("was previously defined here" COMMA_SOURCE_FILE_AT_LINE (134)) ;
          inCompiler->emitSemanticError (temp_3, temp_4 COMMA_SOURCE_FILE_AT_LINE (134)) ;
        }else{
          //-------- @ifInstructionForGeneration
          //--- @andExpressionForGeneration
          //--- @notEqualExpressionForGeneration
          //--- @readerCallExpressionForGeneration
          GALGASap_uint_36__34_ temp_5 (var_cat.readerCall_uint_36__34_ (SOURCE_FILE_AT_LINE (136))) ;
          //--- @literalUInt64ExpressionForGeneration
          GALGASap_uint_36__34_ temp_6 ((PMUInt64) 1ULL COMMA_SOURCE_FILE_AT_LINE (136)) ;
          GALGASap_bool temp_7 (kIsNotEqual, GALGASap_uint_36__34_::objectCompare (temp_5, temp_6) COMMA_SOURCE_FILE_AT_LINE (136)) ;
          //--- @notEqualExpressionForGeneration
          //--- @readerCallExpressionForGeneration
          GALGASap_uint_36__34_ temp_8 (var_cat.readerCall_uint_36__34_ (SOURCE_FILE_AT_LINE (136))) ;
          //--- @literalUInt64ExpressionForGeneration
          GALGASap_uint_36__34_ temp_9 ((PMUInt64) 2ULL COMMA_SOURCE_FILE_AT_LINE (136)) ;
          GALGASap_bool temp_10 (kIsNotEqual, GALGASap_uint_36__34_::objectCompare (temp_8, temp_9) COMMA_SOURCE_FILE_AT_LINE (136)) ;
          GALGASap_bool temp_11 (temp_7.operator_and (temp_10 COMMA_SOURCE_FILE_AT_LINE (136))) ;
          if (isValidAndTrue (temp_11)) {
            //-------- @errorInstructionForGeneration
            GALGASap_location temp_12 (inCompiler->here (SOURCE_FILE_AT_LINE (137))) ;
            //--- @literalStringExpressionForGeneration
            GALGASap_string temp_13 ("ISR category should be 1 ou 2" COMMA_SOURCE_FILE_AT_LINE (137)) ;
            inCompiler->emitSemanticError (temp_12, temp_13 COMMA_SOURCE_FILE_AT_LINE (137)) ;
          }
          //-------- @assignmentInstructionForGeneration
          GALGASap_location temp_14 (inCompiler->here (SOURCE_FILE_AT_LINE (139))) ;
          //--- @readerCallExpressionForGeneration
          GALGASap_uint_36__34_ temp_15 (var_cat.readerCall_uint_36__34_ (SOURCE_FILE_AT_LINE (139))) ;
          GALGASap_uint_36__34__5F_class temp_16 (GALGASap_uint_36__34__5F_class::constructor_new (temp_14, temp_15 COMMA_SOURCE_FILE_AT_LINE (139))) ;
          ioArgument_category = temp_16 ;
        }
      }
    } break ;
    case 3: {
      //-------- @localVariableDeclarationForGeneration
      GALGASap_luint_36__34_ var_prio ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_PRIORITY) COMMA_SOURCE_FILE_AT_LINE (143)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (143)) ;
      //-------- @terminalCheckInstructionForGeneration
      var_prio = inCompiler->synthetizedAttribute_integerNumber () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_SOURCE_FILE_AT_LINE (143)) ;
      //-------- @nonterminalInstructionForGeneration
      GALGASap_lstring joker_3887_0 ; // Joker input parameter
      nt_description_ (joker_3887_0, inCompiler) ;
      joker_3887_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (143)) ;
      //-------- @structuredCastInstructionForGeneration
      if (ioArgument_priority.isValid ()) {
        if (ioArgument_priority.ptr (HERE)->typeDescriptor () == & kTypeDescriptor_GALGAS_void) {
          //-------- @assignmentInstructionForGeneration
          GALGASap_location temp_17 (inCompiler->here (SOURCE_FILE_AT_LINE (146))) ;
          //--- @readerCallExpressionForGeneration
          //--- @readerCallExpressionForGeneration
          GALGASap_uint_36__34_ temp_18 (var_prio.readerCall_uint_36__34_ (SOURCE_FILE_AT_LINE (146))) ;
          GALGASap_uint temp_19 (temp_18.readerCall_uint (inCompiler COMMA_SOURCE_FILE_AT_LINE (146))) ;
          GALGASap_uint_33__32__5F_class temp_20 (GALGASap_uint_33__32__5F_class::constructor_new (temp_17, temp_19 COMMA_SOURCE_FILE_AT_LINE (146))) ;
          ioArgument_priority = temp_20 ;
        }else{
          //-------- @errorInstructionForGeneration
          GALGASap_location temp_21 (inCompiler->here (SOURCE_FILE_AT_LINE (148))) ;
          //--- @literalStringExpressionForGeneration
          GALGASap_string temp_22 ("PRIORITY already defined for this ISR" COMMA_SOURCE_FILE_AT_LINE (148)) ;
          inCompiler->emitSemanticError (temp_21, temp_22 COMMA_SOURCE_FILE_AT_LINE (148)) ;
          //-------- @errorInstructionForGeneration
          //--- @readerCallExpressionForGeneration
          GALGASap_location temp_23 (ioArgument_priority.readerCall_location (SOURCE_FILE_AT_LINE (149))) ;
          //--- @literalStringExpressionForGeneration
          GALGASap_string temp_24 ("was previouly defined here" COMMA_SOURCE_FILE_AT_LINE (149)) ;
          inCompiler->emitSemanticError (temp_23, temp_24 COMMA_SOURCE_FILE_AT_LINE (149)) ;
        }
      }
    } break ;
    case 4: {
      //-------- @localVariableDeclarationForGeneration
      GALGASap_lstring var_rez ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_RESOURCE) COMMA_SOURCE_FILE_AT_LINE (153)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (153)) ;
      //-------- @terminalCheckInstructionForGeneration
      var_rez = inCompiler->synthetizedAttribute_att_5F_token () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (153)) ;
      //-------- @nonterminalInstructionForGeneration
      GALGASap_lstring joker_4234_0 ; // Joker input parameter
      nt_description_ (joker_4234_0, inCompiler) ;
      joker_4234_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (153)) ;
      { //-------- @routineCallInstructionForGeneration
      //--- @literalStringExpressionForGeneration
      GALGASap_string temp_25 ("RESOURCE" COMMA_SOURCE_FILE_AT_LINE (154)) ;
      routine_add_5F_lstring_5F_unique (ioArgument_resources, var_rez, temp_25, inCompiler COMMA_SOURCE_FILE_AT_LINE (154)) ;
      } //-------- @routineCallInstructionForGeneration
    } break ;
    case 5: {
      //-------- @localVariableDeclarationForGeneration
      GALGASap_lstring var_mess ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_MESSAGE) COMMA_SOURCE_FILE_AT_LINE (157)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (157)) ;
      //-------- @terminalCheckInstructionForGeneration
      var_mess = inCompiler->synthetizedAttribute_att_5F_token () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (157)) ;
      //-------- @nonterminalInstructionForGeneration
      GALGASap_lstring joker_4377_0 ; // Joker input parameter
      nt_description_ (joker_4377_0, inCompiler) ;
      joker_4377_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (157)) ;
      { //-------- @routineCallInstructionForGeneration
      //--- @literalStringExpressionForGeneration
      GALGASap_string temp_26 ("MESSAGE" COMMA_SOURCE_FILE_AT_LINE (158)) ;
      routine_add_5F_lstring_5F_unique (ioArgument_messages, var_mess, temp_26, inCompiler COMMA_SOURCE_FILE_AT_LINE (158)) ;
      } //-------- @routineCallInstructionForGeneration
    } break ;
    case 6: {
      //-------- @ifInstructionForGeneration
      //--- @equalExpressionForGeneration
      //--- @optionValueExpressionForGeneration
      GALGASap_bool temp_27 (GALGASap_bool::constructor_new (gOption_goil_5F_options_autosar_5F_on.mValue COMMA_SOURCE_FILE_AT_LINE (160))) ;
      //--- @falseExpressionForGeneration
      GALGASap_bool temp_28 (false COMMA_SOURCE_FILE_AT_LINE (160)) ;
      GALGASap_bool temp_29 (kIsEqual, GALGASap_bool::objectCompare (temp_27, temp_28) COMMA_SOURCE_FILE_AT_LINE (160)) ;
      if (isValidAndTrue (temp_29)) {
        //-------- @errorInstructionForGeneration
        GALGASap_location temp_30 (inCompiler->here (SOURCE_FILE_AT_LINE (161))) ;
        //--- @literalStringExpressionForGeneration
        GALGASap_string temp_31 ("AUTOSAR flag is off, turn it on to use TIMINGPROTECTION attribute in ISR object" COMMA_SOURCE_FILE_AT_LINE (161)) ;
        inCompiler->emitSemanticError (temp_30, temp_31 COMMA_SOURCE_FILE_AT_LINE (161)) ;
      }
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TIMING_5F_PROTECTION) COMMA_SOURCE_FILE_AT_LINE (163)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (163)) ;
      //-------- @selectInstructionForGeneration
      switch (select_goil_5F_obj_5F_isr_1 (inCompiler)) {
      case 1: {
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) COMMA_SOURCE_FILE_AT_LINE (165)) ;
        //-------- @assignmentInstructionForGeneration
        GALGASap_location temp_32 (inCompiler->here (SOURCE_FILE_AT_LINE (166))) ;
        GALGASap_false_5F_timing_5F_prot temp_33 (GALGASap_false_5F_timing_5F_prot::constructor_new (temp_32 COMMA_SOURCE_FILE_AT_LINE (166))) ;
        ioArgument_timing_5F_prot = temp_33 ;
      } break ;
      case 2: {
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) COMMA_SOURCE_FILE_AT_LINE (168)) ;
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE_AT_LINE (168)) ;
        //-------- @localVariableDeclarationForGeneration
        GALGASap_basic_5F_type var_exe_5F_budget ;
        //-------- @localVariableDeclarationForGeneration
        GALGASap_basic_5F_type var_exe_5F_time ;
        //-------- @localVariableDeclarationForGeneration
        GALGASap_basic_5F_type var_time_5F_frame ;
        //-------- @localVariableDeclarationForGeneration
        GALGASap_basic_5F_type var_os_5F_it_5F_lock ;
        //-------- @localVariableDeclarationForGeneration
        GALGASap_basic_5F_type var_all_5F_it_5F_lock ;
        //-------- @localVariableDeclarationForGeneration
        GALGASap_rezlock_5F_map var_rezlocks ;
        //-------- @nonterminalInstructionForGeneration
        nt_timing_5F_prot_5F_attrs_ (var_exe_5F_budget, var_exe_5F_time, var_time_5F_frame, var_os_5F_it_5F_lock, var_all_5F_it_5F_lock, var_rezlocks, inCompiler) ;
        //-------- @structuredCastInstructionForGeneration
        if (var_exe_5F_time.isValid ()) {
          if (var_exe_5F_time.ptr (HERE)->typeDescriptor () == & kTypeDescriptor_GALGAS_void) {
            //-------- @errorInstructionForGeneration
            GALGASap_location temp_34 (inCompiler->here (SOURCE_FILE_AT_LINE (177))) ;
            //--- @literalStringExpressionForGeneration
            GALGASap_string temp_35 ("EXECUTIONTIME not declared" COMMA_SOURCE_FILE_AT_LINE (177)) ;
            inCompiler->emitSemanticError (temp_34, temp_35 COMMA_SOURCE_FILE_AT_LINE (177)) ;
          }
        }
        //-------- @structuredCastInstructionForGeneration
        if (var_exe_5F_budget.isValid ()) {
          if (var_exe_5F_budget.ptr (HERE)->typeDescriptor () == & kTypeDescriptor_GALGAS_uint_36__34__5F_class) {
          GALGASap_uint_36__34__5F_class cast_5215_eb = var_exe_5F_budget ;
            //-------- @errorInstructionForGeneration
            //--- @readerCallExpressionForGeneration
            GALGASap_location temp_36 (cast_5215_eb.readerCall_location (SOURCE_FILE_AT_LINE (181))) ;
            //--- @literalStringExpressionForGeneration
            GALGASap_string temp_37 ("EXECUTIONBUDGET is not an attribute of isr timing protection" COMMA_SOURCE_FILE_AT_LINE (181)) ;
            inCompiler->emitSemanticError (temp_36, temp_37 COMMA_SOURCE_FILE_AT_LINE (181)) ;
          }
        }
        //-------- @assignmentInstructionForGeneration
        GALGASap_location temp_38 (inCompiler->here (SOURCE_FILE_AT_LINE (186))) ;
        GALGASap_timing_5F_prot_5F_isr temp_39 (GALGASap_timing_5F_prot_5F_isr::constructor_new (temp_38, var_exe_5F_time, var_time_5F_frame, var_os_5F_it_5F_lock, var_all_5F_it_5F_lock, var_rezlocks COMMA_SOURCE_FILE_AT_LINE (184))) ;
        ioArgument_timing_5F_prot = temp_39 ;
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE_AT_LINE (191)) ;
      } break ;
      default:
        break ;
      }
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (193)) ;
    } break ;
    case 7: {
      //-------- @localVariableDeclarationForGeneration
      GALGASap_lstring var_app ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_ACCESSING_5F_APPLICATION) COMMA_SOURCE_FILE_AT_LINE (196)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (196)) ;
      //-------- @terminalCheckInstructionForGeneration
      var_app = inCompiler->synthetizedAttribute_att_5F_token () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (196)) ;
      //-------- @nonterminalInstructionForGeneration
      GALGASap_lstring joker_5624_0 ; // Joker input parameter
      nt_description_ (joker_5624_0, inCompiler) ;
      joker_5624_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (196)) ;
      { //-------- @routineCallInstructionForGeneration
      //--- @literalStringExpressionForGeneration
      GALGASap_string temp_40 ("ACCESSING_APPLICATION" COMMA_SOURCE_FILE_AT_LINE (197)) ;
      routine_add_5F_lstring_5F_unique (ioArgument_acc_5F_apps, var_app, temp_40, inCompiler COMMA_SOURCE_FILE_AT_LINE (197)) ;
      } //-------- @routineCallInstructionForGeneration
    } break ;
    case 8: {
      //-------- @localVariableDeclarationForGeneration
      GALGASap_lstring var_src ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_SOURCE) COMMA_SOURCE_FILE_AT_LINE (200)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (200)) ;
      //-------- @terminalCheckInstructionForGeneration
      var_src = inCompiler->synthetizedAttribute_att_5F_token () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (200)) ;
      { //-------- @modifierCallInstructionForGeneration
      //--- @literalStringExpressionForGeneration
      GALGASap_string temp_41 ("SOURCE" COMMA_SOURCE_FILE_AT_LINE (201)) ;
      GALGASap_location temp_42 (inCompiler->here (SOURCE_FILE_AT_LINE (201))) ;
      GALGASap_lstring temp_43 (GALGASap_lstring::constructor_new (temp_41, temp_42 COMMA_SOURCE_FILE_AT_LINE (201))) ;
      //--- @readerCallExpressionForGeneration
      GALGASap_location temp_44 (var_src.readerCall_location (SOURCE_FILE_AT_LINE (201))) ;
      //--- @readerCallExpressionForGeneration
      GALGASap_string temp_45 (var_src.readerCall_string (SOURCE_FILE_AT_LINE (201))) ;
      GALGASap_string_5F_class temp_46 (GALGASap_string_5F_class::constructor_new (temp_44, temp_45 COMMA_SOURCE_FILE_AT_LINE (201))) ;
      ioArgument_other_5F_fields.modifierCall_put (temp_43, temp_46, inCompiler COMMA_SOURCE_FILE_AT_LINE (201)) ;
      } //-------- END @typeMethodInstructionForGeneration
      //-------- @nonterminalInstructionForGeneration
      GALGASap_lstring joker_5878_0 ; // Joker input parameter
      nt_description_ (joker_5878_0, inCompiler) ;
      joker_5878_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (202)) ;
    } break ;
    case 9: {
      //-------- @nonterminalInstructionForGeneration
      nt_free_5F_field_ (ioArgument_other_5F_fields, inCompiler) ;
      //-------- @nonterminalInstructionForGeneration
      GALGASap_lstring joker_5943_0 ; // Joker input parameter
      nt_description_ (joker_5943_0, inCompiler) ;
      joker_5943_0.drop () ; // Release temporary input variables (joker in source)
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (204)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

void cParser_goil_5F_obj_5F_isr::rule_goil_5F_obj_5F_isr_isr_5F_attributes_i1_parse (C_Lexique_goil_5F_lexique * inCompiler) {
  //-------- @repeatInstructionForGeneration
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_goil_5F_obj_5F_isr_0 (inCompiler)) {
    case 2: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_CATEGORY) COMMA_SOURCE_FILE_AT_LINE (130)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (130)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_SOURCE_FILE_AT_LINE (130)) ;
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (130)) ;
    } break ;
    case 3: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_PRIORITY) COMMA_SOURCE_FILE_AT_LINE (143)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (143)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_SOURCE_FILE_AT_LINE (143)) ;
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (143)) ;
    } break ;
    case 4: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_RESOURCE) COMMA_SOURCE_FILE_AT_LINE (153)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (153)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (153)) ;
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (153)) ;
    } break ;
    case 5: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_MESSAGE) COMMA_SOURCE_FILE_AT_LINE (157)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (157)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (157)) ;
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (157)) ;
    } break ;
    case 6: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TIMING_5F_PROTECTION) COMMA_SOURCE_FILE_AT_LINE (163)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (163)) ;
      //-------- @selectInstructionForGeneration
      switch (select_goil_5F_obj_5F_isr_1 (inCompiler)) {
      case 1: {
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) COMMA_SOURCE_FILE_AT_LINE (165)) ;
      } break ;
      case 2: {
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) COMMA_SOURCE_FILE_AT_LINE (168)) ;
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE_AT_LINE (168)) ;
        //-------- @nonterminalInstructionForGeneration
        nt_timing_5F_prot_5F_attrs_parse (inCompiler) ;
        //-------- @terminalCheckInstructionForGeneration
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE_AT_LINE (191)) ;
      } break ;
      default:
        break ;
      }
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (193)) ;
    } break ;
    case 7: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_ACCESSING_5F_APPLICATION) COMMA_SOURCE_FILE_AT_LINE (196)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (196)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (196)) ;
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (196)) ;
    } break ;
    case 8: {
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_SOURCE) COMMA_SOURCE_FILE_AT_LINE (200)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE_AT_LINE (200)) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_SOURCE_FILE_AT_LINE (200)) ;
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (202)) ;
    } break ;
    case 9: {
      //-------- @nonterminalInstructionForGeneration
      nt_free_5F_field_parse (inCompiler) ;
      //-------- @nonterminalInstructionForGeneration
      nt_description_parse (inCompiler) ;
      //-------- @terminalCheckInstructionForGeneration
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE_AT_LINE (204)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


