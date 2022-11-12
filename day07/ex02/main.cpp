#include <iostream>
#include "Array.hpp"
#include <stdio.h>

#define MAX_VAL 750
char	*ft_strdup(const char *s1)
{
	int		i;
int 		s;
	char	*str;

	i = 0;
	s = strlen(s1);
    printf("%d\n", s);
	str = (char*)malloc(((size_t)s) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
   std::cout << ft_strdup(" publié en 1977 avec Finn E. Kydland, il analysait si les banques centrales devaient avoir des objectifs chiffrés stricts ou être autorisées à utiliser leur pouvoir discrétionnaire pour définir la politique monétaire. Il est également bien connu pour ses travaux sur le filtre Hodrick  Prescott, utilisé pour atténuer les fluctuations dune série chronologique.")<< std::endl;
}