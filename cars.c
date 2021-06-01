#include <stdio.h>
#include <string.h>
struct car
{
	char montelo[50];
	float timh;
	int etos_kataskeuhs;
	
};

int main ()
{
	struct car cars[100];
	int i,m,b,boh8os=0;
	float p;
	char mdl[50],s;
	for(i=0;i<100;i++)
	{
		printf("Dwste to montelo tou autokinhtou: ");
		scanf("%s",cars[i].montelo);
		
		printf("Dwste thn timh tou autokinhtou(Gia termatismo pathste to -1): ");
		scanf("%g",&cars[i].timh);
		
		if (cars[i].timh ==-1)
		break;
	
		printf("Dwste thn xronia pou kataskeuasthke: ");
		scanf("%d",&cars[i].etos_kataskeuhs);
	    boh8os+=1;
	}
	while (1)
	{
	printf("\n\t\t~~~~~~~~~~MENOU~~~~~~~~~~\n\t\tEpilekste:\n\t\t1.Emfanish Montelou");
	printf("\n\t\t2.Emfanish Montelou me bash timhs\n\t\t3.Termatismos programmatos\n\t\t\t   ");
	scanf("%d",&m);
	
	if (m==1)
	{
		printf("\nPathste ena(1)an 8elete na breite ena Montelo h duo(2)an 8elete na ta deite ola: ");
		scanf("%d",&b);
		if(b==1)
		{
			printf("\nDwste to Montelo pou 8elete na breite: ");
			scanf("%s",&mdl);
			for (i=0;i<boh8os;i++)
	        {
	            s=strcmp(mdl,cars[i].montelo);
				if(s==0)
		        {
			        printf("To Montelo %s vre8hke,to opoio kataskeuasthke to %d kai h timh tou"
			        " einai sta %g eurw",cars[i].montelo,cars[i].etos_kataskeuhs,cars[i].timh);
			    }
			    else if((s==1 )&& (i+1==boh8os))
			    printf("To Montelo %s Den vre8hke,parakalw dokimaste me kapoio allo montelo",cars[i].montelo);
		    }
		}
		if (b==2)
		{
			printf("\nPathste asterisko(*)gia na deite ola ta Montela: ");
			scanf("%s",&s);
	        if (s=='*')
	        {
		        for(i=0;i<boh8os;i++)
		        {
			        printf("\nYparxei to montelo %s,pou kataskeuasthke to %d kai kostizei"
					" %g eurw",cars[i].montelo,cars[i].etos_kataskeuhs,cars[i].timh);
		        }
	        }
		}
		
		
	    
		
	}
	if (m==2)
	{
		printf("\nDwste thn timh pou 8elete na psaksoume: ");
		scanf("%g",&p);
		printf("\nTa amaksia me timh megaluterh apo authn pou dwsate einai: ");
		for (i=0;i<100;i++)
		{
			if (cars[i].timh>p)
			printf("\n%s",cars[i].montelo);
		}
	}
	if (m==3)
	return 0;
    }
}
	

