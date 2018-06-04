#ifndef IGNORED_DECL
#define IGNORED_DECL(type)
#endif

#ifndef IGNORED_STMT
#define IGNORED_STMT(type)
#endif

#ifndef SUPPORTED_DECL
#define SUPPORTED_DECL(type)
#endif

#ifndef SUPPORTED_STMT
#define SUPPORTED_STMT(type)
#endif

IGNORED_STMT(OMPOrderedDirective)
IGNORED_STMT(OMPParallelForDirective)

IGNORED_DECL(StaticAssertDecl)

SUPPORTED_DECL(DecompositionDecl)
SUPPORTED_DECL(VarDecl)
SUPPORTED_DECL(TypeAliasDecl)
SUPPORTED_DECL(TypedefDecl)

SUPPORTED_STMT(MemberExpr)
SUPPORTED_STMT(IntegerLiteral)
SUPPORTED_STMT(StringLiteral)
SUPPORTED_STMT(FloatingLiteral)
SUPPORTED_STMT(CXXOperatorCallExpr)
SUPPORTED_STMT(ParenExpr)
SUPPORTED_STMT(UnaryOperator)
SUPPORTED_STMT(LambdaExpr)
SUPPORTED_STMT(CXXMemberCallExpr)
SUPPORTED_STMT(CXXThisExpr)
SUPPORTED_STMT(CXXConstructExpr)
SUPPORTED_STMT(BinaryOperator)
SUPPORTED_STMT(CXXNamedCastExpr)
SUPPORTED_STMT(CXXFunctionalCastExpr)
SUPPORTED_STMT(ImplicitCastExpr)
SUPPORTED_STMT(UnaryExprOrTypeTraitExpr)
SUPPORTED_STMT(ConditionalOperator)
SUPPORTED_STMT(MaterializeTemporaryExpr)
SUPPORTED_STMT(CXXBindTemporaryExpr)
SUPPORTED_STMT(DeclRefExpr)
SUPPORTED_STMT(CallExpr)
SUPPORTED_STMT(CXXBoolLiteralExpr)
SUPPORTED_STMT(CXXTypeidExpr)
SUPPORTED_STMT(GNUNullExpr)
SUPPORTED_STMT(CharacterLiteral)
SUPPORTED_STMT(ArraySubscriptExpr)
SUPPORTED_STMT(PredefinedExpr)
SUPPORTED_STMT(ExprWithCleanups)
SUPPORTED_STMT(InitListExpr)
SUPPORTED_STMT(DeclStmt)
SUPPORTED_STMT(CompoundStmt)
SUPPORTED_STMT(IfStmt)
SUPPORTED_STMT(SubstNonTypeTemplateParmExpr)
SUPPORTED_STMT(ReturnStmt)
SUPPORTED_STMT(NullStmt)
SUPPORTED_STMT(CXXDefaultArgExpr)
SUPPORTED_STMT(CXXStdInitializerListExpr)
SUPPORTED_STMT(CStyleCastExpr)
SUPPORTED_STMT(ExplicitCastExpr)
SUPPORTED_STMT(ForStmt)
SUPPORTED_STMT(CXXNewExpr)
SUPPORTED_STMT(CXXNullPtrLiteralExpr)
SUPPORTED_STMT(ArrayInitLoopExpr)
SUPPORTED_STMT(OpaqueValueExpr)
SUPPORTED_STMT(WhileStmt)
SUPPORTED_STMT(SwitchStmt)
SUPPORTED_STMT(CaseStmt)
SUPPORTED_STMT(BreakStmt)
SUPPORTED_STMT(DefaultStmt)
SUPPORTED_STMT(CXXForRangeStmt)
SUPPORTED_STMT(DoStmt)
SUPPORTED_STMT(ArrayInitIndexExpr)
SUPPORTED_STMT(UnresolvedLookupExpr)

#undef IGNORED_DECL
#undef IGNORED_STMT
#undef SUPPORTED_DECL
#undef SUPPORTED_STMT
