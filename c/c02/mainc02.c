Ex00
int main()
{
	char c[] = "lol"; // dest
	char d[] = "chocolate"; // src
	char *ptr; // recebe o destino (quarda um valor de memoria temporario) 
	ptr = ft_strcpy(c, d);
	printf("valor de %s", ptr);
	return 0;		
}
/////////////////////////////////////////////////////////////////////////////////////////////
Ex01
int main()
{
	char c[] = "lol";
	// dest = vai recever a string
	char d[] = "chocolate";
	// src (sorce/fonte) = vai transferir a string para o destino
	char *ptr;
	ptr = ft_strncpy(c, d, 5);
	//valor de "n", é o limite declarado para a minha string
	printf("valor de %s", ptr);
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////
Ex02
int main()
{
	char c[] = "";
	int ptr;

	ptr = ft_str_is_alpha(c);
	printf("string de c %i", ptr);
}
///////////////////////////////////////////////////////////////////////////////////////////////
Ex03
int main()
{
	char c[] = "54545";
	int ptr;
	ptr = ft_str_is_numeric(c);
	printf("string de n %d", ptr);
}

///////////////////////////////////////////////////////////////////////////////////////////////
Ex04
int main()
{
	char c[] = "";
	int ptr;
	ptr = ft_str_is_lowercase(c);
	printf("%i", ptr);
}
///////////////////////////////////////////////////////////////////////////////////////////////
Ex05
 int main()
 {
	 char c[] = "";
	 int ptr;
	 ptr = ft_str_is_uppercase(c);
	 printf("%i", ptr);
 }
///////////////////////////////////////////////////////////////////////////////////////////////
Ex06
int main()
{
	char c[] = " ";
	int ptr;
	ptr = ft_str_is_printable(c);
	printf("%i", ptr);
}
//////////////////////////////////////////////////////////////////////////////////////////////
Ex07
int main()
{
	char c[] = " hA5hA ha";
	char *ptr;
	ptr = ft_strupcase(c);
	printf("%s", ptr);
}
//////////////////////////////////////////////////////////////////////////////////////////////
Ex08
int main()
{
	char c[] = "IssoNdiminui";
	char *ptr;
	ptr = ft_strlowcase(c);
	printf("%s", ptr);
}
///////////////////////////////////////////////////////////////////////////////////////////////