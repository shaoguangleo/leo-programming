%s MAGIC

%%
<MAGIC>.+ {BEGIN 0; printf("MAGIC:");ECHO;}
magic BEGIN MAGIC;
%%

main()
{
    yylex();
}
