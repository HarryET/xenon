
// Generated from SanParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "SanParserVisitor.h"


/**
 * This class provides an empty implementation of SanParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SanParserBaseVisitor : public SanParserVisitor {
public:

  virtual antlrcpp::Any visitInstructions(SanParser::InstructionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBody(SanParser::BodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(SanParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInParenExpression(SanParser::InParenExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryOperation(SanParser::BinaryOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryBitwiseOperation(SanParser::BinaryBitwiseOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityOperation(SanParser::EqualityOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableExpression(SanParser::VariableExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex(SanParser::IndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteralDeclaration(SanParser::LiteralDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallExpression(SanParser::FunctionCallExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSizeofExpression(SanParser::SizeofExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryMultiplicativeOperation(SanParser::BinaryMultiplicativeOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPropertyExpression(SanParser::PropertyExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryConditionalOperation(SanParser::BinaryConditionalOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeCast(SanParser::TypeCastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassInstantiationExpression(SanParser::ClassInstantiationExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryComparisonOperation(SanParser::BinaryComparisonOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicativeOperatorStatement(SanParser::MultiplicativeOperatorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperatorStatement(SanParser::OperatorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitwiseOperatorStatement(SanParser::BitwiseOperatorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalOperatorStatement(SanParser::ConditionalOperatorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonOperatorStatement(SanParser::ComparisonOperatorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityOperatorStatement(SanParser::EqualityOperatorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(SanParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclaration(SanParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallArguments(SanParser::FunctionCallArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallArgument(SanParser::FunctionCallArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(SanParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDeclaration(SanParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionArguments(SanParser::FunctionArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionArgument(SanParser::FunctionArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionArgumentVariable(SanParser::FunctionArgumentVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionArgumentVariadic(SanParser::FunctionArgumentVariadicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(SanParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(SanParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseStatement(SanParser::ElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(SanParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStatement(SanParser::BreakStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassStatement(SanParser::ClassStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassGenerics(SanParser::ClassGenericsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassExtends(SanParser::ClassExtendsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassBody(SanParser::ClassBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassProperty(SanParser::ClassPropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassMethod(SanParser::ClassMethodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassInstantiationProperties(SanParser::ClassInstantiationPropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassInstantiationProperty(SanParser::ClassInstantiationPropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(SanParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeQualifier(SanParser::TypeQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDimensions(SanParser::TypeDimensionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeName(SanParser::TypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryTypeName(SanParser::PrimaryTypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassTypeName(SanParser::ClassTypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassTypeNameGenerics(SanParser::ClassTypeNameGenericsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespaceStatement(SanParser::NamespaceStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScopeResolver(SanParser::ScopeResolverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEos(SanParser::EosContext *ctx) override {
    return visitChildren(ctx);
  }


};

