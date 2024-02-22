#ifndef NEWHEAD_H_INCLUDED
#define NEWHEAD_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>
#include <conio.h>
//declaration des structures
typedef struct{
 	int jour,annee;
 	int mois;
 }Date;
 typedef struct {
 	char Nom[20],Prenom[20],Adressse[50],NumAbonnement[40],NumConteur[30],IdClient[20],Mot_pass[30],Cartier[12],residence[12];
 	Date d1;
 }Client;
 typedef struct{
 	char IdClient[20],Num_Facture[20];
 	float Montant, Consommation;
 	Date sortie,Limite;
 }Facture;
 static char IdGlobal[23],MdpGLO[45];
 static Facture F1;
 Facture Res;
 char Id[23];
 //Carte bancaire
  typedef struct {
     char nom_p[20],prenom_p[20];
     int Num_carte,Num_verif;
 }carte_bancaire;
// Fin declaration des strecture
 Client aide;
Client V;
//declaration des fichier
 FILE *fp,*fp1,*fp3,*fpm,*fp4,*fp5,*fp6;
// fin declaration des fichie



void firstrow(){
	int i ;
	printf("\n\t%c",201);
    for( i=0;i<70;i++)
    	printf("%c",205);
    	printf("%c",187);
}
void lastrow(){
	int i ;
	printf("\n\t%c",200);
    for( i=0;i<70;i++)
    	printf("%c",205);
    	printf("%c",188);
}
void midtext(){
	int i ;
	printf("\n\t%c",186);
}
void midrows(){
	int i ;
	printf("\n\t%c",204);
    for( i=0;i<70;i++)
    	printf("%c",205);
    	printf("%c",185);
}

//all fct about Client
//fonction ajout d'un client mode francais
void AjouterClient()
{

	Client C1;
	char Id[20];
    int codeR, tr=0;
    fp=fopen("Clients.text","a+");
    if (fp==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    else{
    printf("Saisir l'ID de Client :\n");
    scanf("%s", &Id);

    while(!feof(fp))
    {
        fscanf(fp,"%s   %s   %s    %s    %s   %s    %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass);
        if(strcmp(C1.IdClient,Id)==0)
        {
            tr=1;
            break;
        }
    }
    if(tr==1)
    printf("Le Client existe deja !!!!!\n");
    else
    {


        printf("Saisir le Nom : \n");
        scanf("%s", C1.Nom);
        printf("Saisir le Prenom : \n");
        scanf("%s", C1.Prenom);
        printf("Saisir la Ville de Client : \n");
       scanf("%s",C1.Adressse);
       fp4=fopen("AdresseComp.text","a+");
    if (fp4==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    else{
            printf("Saisir le Quartier :\n");
            scanf("%s",C1.Cartier);
             printf("Saisir le numero de Residence :\n");
             scanf("%s",C1.residence);
             fprintf(fp4,"%s  %s  %s  %s  \n",Id,C1.Adressse,C1.Cartier,C1.residence);

    }
    fclose(fp4);

       do{
        printf("Entrez le numéro d'abonnement composé de 1 caractere et 8 chiffres exemple :M1234567 \n");
        scanf("%s",C1.NumAbonnement);
        }while(strlen(C1.NumAbonnement)!=8&&(C1.NumAbonnement[0]!='A'||C1.NumAbonnement[0]!='Z'||C1.NumAbonnement[0]!='E'||C1.NumAbonnement[0]!='R'||C1.NumAbonnement[0]!='T'||C1.NumAbonnement[0]!='Y'||C1.NumAbonnement[0]!='U'||C1.NumAbonnement[0]!='I'||C1.NumAbonnement[0]!='O'||C1.NumAbonnement[0]!='P'||C1.NumAbonnement[0]!='Q'||C1.NumAbonnement[0]!='S'||C1.NumAbonnement[0]!='D'||C1.NumAbonnement[0]!='F'||C1.NumAbonnement[0]!='G'||C1.NumAbonnement[0]!='H'||C1.NumAbonnement[0]!='J'||C1.NumAbonnement[0]!='K'||C1.NumAbonnement[0]!='L'||C1.NumAbonnement[0]!='M'||C1.NumAbonnement[0]!='W'||C1.NumAbonnement[0]!='X'||C1.NumAbonnement[0]!='C'||C1.NumAbonnement[0]!='V'||C1.NumAbonnement[0]!='B'||C1.NumAbonnement[0]!='N'));
        do{
        printf("Saisir le Numero de Contour Compose de 1 Caractere et 8 chiffres exemple :M1234567\n");
        scanf("%s", C1.NumConteur);
        }while(strlen(C1.NumConteur)!=8&&(C1.NumConteur[0]!='A'||C1.NumConteur[0]!='Z'||C1.NumConteur[0]!='E'||C1.NumConteur[0]!='R'||C1.NumConteur[0]!='T'||C1.NumConteur[0]!='Y'||C1.NumConteur[0]!='U'||C1.NumConteur[0]!='I'||C1.NumConteur[0]!='O'||C1.NumConteur[0]!='P'||C1.NumConteur[0]!='Q'||C1.NumConteur[0]!='S'||C1.NumConteur[0]!='D'||C1.NumConteur[0]!='F'||C1.NumConteur[0]!='G'||C1.NumConteur[0]!='H'||C1.NumConteur[0]!='J'||C1.NumConteur[0]!='K'||C1.NumConteur[0]!='L'||C1.NumConteur[0]!='M'||C1.NumConteur[0]!='W'||C1.NumConteur[0]!='X'||C1.NumConteur[0]!='C'||C1.NumConteur[0]!='V'||C1.NumConteur[0]!='B'||C1.NumConteur[0]!='N'));
        do{
       printf("Saisir Un mot de passe de 6 chifrre au Client:   \n");
       scanf("%s", C1.Mot_pass);
       }while(strlen(C1.Mot_pass)!=6);
        fprintf(fp,"%s   %s   %s    %s    %s   %s   %s\n",C1.Nom,C1.Prenom,C1.Adressse,C1.NumAbonnement,C1.NumConteur,Id,C1.Mot_pass);

     fp5=fopen("ID_and_Passowrd.text","a+");
    if (fp5==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    else{

             fprintf(fp5,"%s  %s  \n",Id,C1.Mot_pass);

    }
    fclose(fp5);
    }
    fclose(fp);

}



}
//fin fct ajouter Client mode francais





//fonction ajout d'un client mode english
void AjouterClient1()
{

	Client C1;
	char Id[20];
    int codeR, tr=0;
     int tr2;
    tr2=0;
    fp=fopen("Clients.text","a+");
    if (fp==NULL){
        printf("Impossible to open the file  \n");
        exit(1);
    }
    else{
    printf("Enter the Client ID :\n");
    scanf("%s", &Id);

    while(!feof(fp))
    {
        fscanf(fp,"%s   %s   %s    %s    %s   %s    %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass);
        if(strcmp(C1.IdClient,Id)==0)
        {
            tr=1;
            break;
        }
    }
    if(tr==1)
    printf("Client Already Exist\n");
    else
    {


        printf("Enter the Client Last Name: \n");
        scanf("%s", C1.Nom);
        printf("Enter the Client First Name: \n");
        scanf("%s", C1.Prenom);
        printf("Enter the Client City: \n");
       scanf("%s",C1.Adressse);
       fp4=fopen("AdresseComp.text","a+");
    if (fp4==NULL){
        printf("Impossible to open the file \n");
        exit(1);
    }
    while(!feof(fp4)){
            fprintf(fp4,"%s  %s  %s  %s  \n",aide.IdClient,C1.Adressse,C1.Cartier,C1.residence);
            if(strcmp(Id,aide.IdClient)==0)
                tr2=1;
            break;

    }
    if(tr2!=1){
            printf("Enter the Neighborhood number :\n");
            scanf("%s",C1.Cartier);
             printf("Enter the Residence number :\n");
             scanf("%s",C1.residence);
             fprintf(fp4,"%s  %s  %s  %s  \n",Id,C1.Adressse,C1.Cartier,C1.residence);

    }
    fclose(fp4);
  tr2=0;
       do{
        printf("Enter the Subscription Number Composed of 1 character and 8 digits example :M1234567 \n");
        scanf("%s",C1.NumAbonnement);
        }while(strlen(C1.NumAbonnement)!=8&&(C1.NumAbonnement[0]!='A'||C1.NumAbonnement[0]!='Z'||C1.NumAbonnement[0]!='E'||C1.NumAbonnement[0]!='R'||C1.NumAbonnement[0]!='T'||C1.NumAbonnement[0]!='Y'||C1.NumAbonnement[0]!='U'||C1.NumAbonnement[0]!='I'||C1.NumAbonnement[0]!='O'||C1.NumAbonnement[0]!='P'||C1.NumAbonnement[0]!='Q'||C1.NumAbonnement[0]!='S'||C1.NumAbonnement[0]!='D'||C1.NumAbonnement[0]!='F'||C1.NumAbonnement[0]!='G'||C1.NumAbonnement[0]!='H'||C1.NumAbonnement[0]!='J'||C1.NumAbonnement[0]!='K'||C1.NumAbonnement[0]!='L'||C1.NumAbonnement[0]!='M'||C1.NumAbonnement[0]!='W'||C1.NumAbonnement[0]!='X'||C1.NumAbonnement[0]!='C'||C1.NumAbonnement[0]!='V'||C1.NumAbonnement[0]!='B'||C1.NumAbonnement[0]!='N'));
        do{
        printf("Enter the Contour Number Composed of 1 Character and 8 digits example :J1234567\n");
        scanf("%s", C1.NumConteur);
        }while(strlen(C1.NumConteur)!=8&&(C1.NumConteur[0]!='A'||C1.NumConteur[0]!='Z'||C1.NumConteur[0]!='E'||C1.NumConteur[0]!='R'||C1.NumConteur[0]!='T'||C1.NumConteur[0]!='Y'||C1.NumConteur[0]!='U'||C1.NumConteur[0]!='I'||C1.NumConteur[0]!='O'||C1.NumConteur[0]!='P'||C1.NumConteur[0]!='Q'||C1.NumConteur[0]!='S'||C1.NumConteur[0]!='D'||C1.NumConteur[0]!='F'||C1.NumConteur[0]!='G'||C1.NumConteur[0]!='H'||C1.NumConteur[0]!='J'||C1.NumConteur[0]!='K'||C1.NumConteur[0]!='L'||C1.NumConteur[0]!='M'||C1.NumConteur[0]!='W'||C1.NumConteur[0]!='X'||C1.NumConteur[0]!='C'||C1.NumConteur[0]!='V'||C1.NumConteur[0]!='B'||C1.NumConteur[0]!='N'));
        do{
       printf("Enter a 6-digit Password to the Client:    \n");
       scanf("%s", C1.Mot_pass);
       }while(strlen(C1.Mot_pass)!=6);
        fprintf(fp,"%s   %s   %s    %s    %s   %s   %s\n",C1.Nom,C1.Prenom,C1.Adressse,C1.NumAbonnement,C1.NumConteur,Id,C1.Mot_pass);

     fp5=fopen("ID_and_Passowrd.text","a+");
    if (fp5==NULL){
        printf("Impossible to open the file \n");
        exit(1);
    }
    while(!feof(fp5)){
        fscanf(fp5,"%s  %s  \n",aide.IdClient,aide.Mot_pass);
        if(strcmp(Id,aide.IdClient)==0)
            tr2=1;
    }
    if(tr2==1){

             fprintf(fp5,"%s  %s  \n",Id,C1.Mot_pass);

    }
    fclose(fp5);
    }
  fclose(fp);
}




}
//fin fct ajouter Client mode francais



//fin fct ajouter Client mode english
//fonction affichage fichies des clients mode francais
//fct affichage des clients mode francais
//
//fct affichage des clients mode francais
//
void afficheLesclientLi()
{
    char c;
    Client C1;
    fp=fopen("Clients.text","r");
     if(fp==NULL){
        printf("Echec d'overture :\n\n");
        exit(1);
 }else{
       printf("\n\n------------------------------les Clients-----------------------\n\n");
       firstrow();
       	int i=0;
      while(!feof(fp)){
        fscanf(fp,"%s   %s   %s    %s    %s   %s    %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass);
      midtext();  printf("\n\t\t\tNom                 :  %s    \n\t\t\tPrenom              :  %s    \n\t\t\tadresse             :  %s   \n\t\t\tNuméro d'abenement  :  %s     \n\t\t\tNumero de conteur   :  %s       \n\t\t\tId de client        :  %s     \n\t\t\tMot de passe        :  %s\n",C1.Nom,C1.Prenom,C1.Adressse,C1.NumAbonnement,C1.NumConteur,C1.IdClient,C1.Mot_pass);
        midrows();

    }

   fclose(fp);
   lastrow();
 }

}
//

//fonction affichage fichies des clients mode english

//fin fct affichage des clients mode english


void afficheLesclientLi1()
{
    char c;
    Client C1;
    fp=fopen("Clients.text","r");
     if(fp==NULL){
        printf("Echec d'overture :\n\n");
        exit(1);
 }else{
       printf("\n\n------------------------------ Clients-----------------------\n\n");
       firstrow();
       	int i=0;
      while(!feof(fp)){
        fscanf(fp,"%s   %s   %s    %s    %s   %s    %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass);
      midtext();  printf("\n\t\t\tLast Name               :  %s    \n\t\t\tFirst Name              :  %s    \n\t\t\tAdress                  :  %s   \n\t\t\tSubscription number     :  %s     \n\t\t\tContor Number           :  %s       \n\t\t\tClien ID                :  %s     \n\t\t\tPassword                :  %s\n",C1.Nom,C1.Prenom,C1.Adressse,C1.NumAbonnement,C1.NumConteur,C1.IdClient,C1.Mot_pass);
        midrows();

    }

   fclose(fp);
   lastrow();
 }

}


   //fonction de modification d'info de client mode francais




   //fonction de modification d'info de client mode francais
void ModifficationInfoClient(){
		Client C1,C2;
	char Id[20];
    int codeR, tr=0;
    fp=fopen("Clients.text","r");
    if (fp==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
 fpm=fopen("temp.txt","wt");
 if (fpm==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    	printf("Entrer Id de Client a Modifier \n");scanf("%s",Id);
    	while(fscanf(fp,"%s   %s   %s    %s    %s   %s   %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass)==7)
    	{
    		if(strcmp(Id,C1.IdClient)==0)
    		{

    		tr=1;
    	printf("Entrer le nouveau Nom:");
    	scanf("%s", C1.Nom);
        printf("Entrer le Prenom : \n");
        scanf("%s", C1.Prenom);
        printf("Entrer l'Adresse: \n");
        scanf("%s", C1.Adressse);

     do{
        printf("Entrer le Numero d'Abonemment Compose de Un Caractere et 8 chifrre exemple :M1234567 \n");
        scanf("%s",C1.NumAbonnement);
        }while(strlen(C1.NumAbonnement)!=8&&(C1.NumAbonnement[0]!='A'||C1.NumAbonnement[0]!='Z'||C1.NumAbonnement[0]!='E'||C1.NumAbonnement[0]!='R'||C1.NumAbonnement[0]!='T'||C1.NumAbonnement[0]!='Y'||C1.NumAbonnement[0]!='U'||C1.NumAbonnement[0]!='I'||C1.NumAbonnement[0]!='O'||C1.NumAbonnement[0]!='P'||C1.NumAbonnement[0]!='Q'||C1.NumAbonnement[0]!='S'||C1.NumAbonnement[0]!='D'||C1.NumAbonnement[0]!='F'||C1.NumAbonnement[0]!='G'||C1.NumAbonnement[0]!='H'||C1.NumAbonnement[0]!='J'||C1.NumAbonnement[0]!='K'||C1.NumAbonnement[0]!='L'||C1.NumAbonnement[0]!='M'||C1.NumAbonnement[0]!='W'||C1.NumAbonnement[0]!='X'||C1.NumAbonnement[0]!='C'||C1.NumAbonnement[0]!='V'||C1.NumAbonnement[0]!='B'||C1.NumAbonnement[0]!='N'));
        do{
        printf("Enter the Contour Number Composed of 1 Character and 8 digits example :J1234567\n");
        scanf("%s", C1.NumConteur);
        }while(strlen(C1.NumConteur)!=8&&(C1.NumConteur[0]!='A'||C1.NumConteur[0]!='Z'||C1.NumConteur[0]!='E'||C1.NumConteur[0]!='R'||C1.NumConteur[0]!='T'||C1.NumConteur[0]!='Y'||C1.NumConteur[0]!='U'||C1.NumConteur[0]!='I'||C1.NumConteur[0]!='O'||C1.NumConteur[0]!='P'||C1.NumConteur[0]!='Q'||C1.NumConteur[0]!='S'||C1.NumConteur[0]!='D'||C1.NumConteur[0]!='F'||C1.NumConteur[0]!='G'||C1.NumConteur[0]!='H'||C1.NumConteur[0]!='J'||C1.NumConteur[0]!='K'||C1.NumConteur[0]!='L'||C1.NumConteur[0]!='M'||C1.NumConteur[0]!='W'||C1.NumConteur[0]!='X'||C1.NumConteur[0]!='C'||C1.NumConteur[0]!='V'||C1.NumConteur[0]!='B'||C1.NumConteur[0]!='N'));



   }
       fprintf(fpm,"%s   %s   %s    %s    %s   %s   %s\n",C1.Nom,C1.Prenom,C1.Adressse,C1.NumAbonnement,C1.NumConteur,C1.IdClient,C1.Mot_pass);

		}
		fclose(fp);fclose(fpm);
		remove("Clients.text");
		rename("temp.txt","Clients.text");
		if(tr==0)
		printf("Client doesn't exist !!!!'");
		else
		printf("Modification enregistree");
	}

//fin de fonction de modification

//fonction de modification d'info de client mode english
void ModifficationInfoClient1(){
    Client C1,C2;
	char Id[20];
    int codeR, tr=0;
    fp=fopen("Clients.text","r");
    if (fp==NULL){
        printf("ERREUR  \n");
        exit(1);
    }
 fpm=fopen("temp.txt","wt");
 if (fpm==NULL){
        printf("ERREUR \n");
        exit(1);
    }
    	printf("Enter Id of Client to modify \n");scanf("%s",Id);
    	while(fscanf(fp,"%s   %s   %s    %s    %s   %s   %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass)==7)
    	{
    		if(strcmp(Id,C1.IdClient)==0)
    		{

    		tr=1;
    	printf("Enter First Name:");
    	scanf("%s",C1.Nom);
        printf("Enter Last Name:" );
        scanf("%s",C1.Prenom);
        printf("Enter Adress \n");
        scanf("%s",C1.Adressse);

        do{
        printf("Enter the Subscription Number Composed of 1 character and 8 digits example:M1234567 \n");
        scanf("%s",C1.NumAbonnement);
        }while(strlen(C1.NumAbonnement)!=8&&(C1.NumAbonnement[0]!='A'||C1.NumAbonnement[0]!='Z'||C1.NumAbonnement[0]!='E'||C1.NumAbonnement[0]!='R'||C1.NumAbonnement[0]!='T'||C1.NumAbonnement[0]!='Y'||C1.NumAbonnement[0]!='U'||C1.NumAbonnement[0]!='I'||C1.NumAbonnement[0]!='O'||C1.NumAbonnement[0]!='P'||C1.NumAbonnement[0]!='Q'||C1.NumAbonnement[0]!='S'||C1.NumAbonnement[0]!='D'||C1.NumAbonnement[0]!='F'||C1.NumAbonnement[0]!='G'||C1.NumAbonnement[0]!='H'||C1.NumAbonnement[0]!='J'||C1.NumAbonnement[0]!='K'||C1.NumAbonnement[0]!='L'||C1.NumAbonnement[0]!='M'||C1.NumAbonnement[0]!='W'||C1.NumAbonnement[0]!='X'||C1.NumAbonnement[0]!='C'||C1.NumAbonnement[0]!='V'||C1.NumAbonnement[0]!='B'||C1.NumAbonnement[0]!='N'));
        do{
        printf("Give   Number of conteur  one Caractere and 8 numbres for exemple :J1234567\n");
        scanf("%s", C1.NumConteur);
        }while(strlen(C1.NumConteur)!=8&&(C1.NumConteur[0]!='A'||C1.NumConteur[0]!='Z'||C1.NumConteur[0]!='E'||C1.NumConteur[0]!='R'||C1.NumConteur[0]!='T'||C1.NumConteur[0]!='Y'||C1.NumConteur[0]!='U'||C1.NumConteur[0]!='I'||C1.NumConteur[0]!='O'||C1.NumConteur[0]!='P'||C1.NumConteur[0]!='Q'||C1.NumConteur[0]!='S'||C1.NumConteur[0]!='D'||C1.NumConteur[0]!='F'||C1.NumConteur[0]!='G'||C1.NumConteur[0]!='H'||C1.NumConteur[0]!='J'||C1.NumConteur[0]!='K'||C1.NumConteur[0]!='L'||C1.NumConteur[0]!='M'||C1.NumConteur[0]!='W'||C1.NumConteur[0]!='X'||C1.NumConteur[0]!='C'||C1.NumConteur[0]!='V'||C1.NumConteur[0]!='B'||C1.NumConteur[0]!='N'));

   }
       fprintf(fpm,"%s   %s   %s    %s    %s   %s   %s\n",C1.Nom,C1.Prenom,C1.Adressse,C1.NumAbonnement,C1.NumConteur,C1.IdClient,C1.Mot_pass);

		}
		fclose(fp);fclose(fpm);
		remove("Clients.text");
		rename("temp.txt","Clients.text");
		if(tr==0)
		printf("Client not found !!!!'");
		else
		printf("modification was Completed THANKS !!!");
	}

//fin de fonction de modification mode english

//fonction de recherche d'un client mode francais


	void RechercherClient(){

	Client C1;
	char Idn[20];
    int codeR, tr=0;
    fp=fopen("Clients.text","rt");
    if (fp==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    else{
            char neam[12],scneam[20];


    printf("Entrer l'Id de Client :\n");
    scanf("%s",Idn);

    while(!feof(fp))
    {
        fscanf(fp,"%s   %s   %s    %s    %s   %s    %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass);
        if(strcmp(C1.IdClient,Idn)==0)
        {
            tr=1;
            break;
        }
    }
    fclose(fp);
    if(tr==1){
    printf("\n\t\t\tNom                 :  %s    \n\t\t\tPrenom              :  %s    \n\t\t\tadresse             :  %s   \n\t\t\tNuméro d'abenement  :  %s     \n\t\t\tNumero de conteur   :  %s       \n\t\t\tId de client        :  %s     \n\t\t\tMot de passe        :  %s\n",C1.Nom,C1.Prenom,C1.Adressse,C1.NumAbonnement,C1.NumConteur,C1.IdClient,C1.Mot_pass);
    }
    else
    printf("Le Client n'existe pas !!!!!\n");
	}

}
// fiin fonction de recherche d'un client mode fr

//fct Recherch mode english

int RechercherClient1(){

	Client C1;
	char Idn[20];
    int codeR, tr=0;
    fp=fopen("Clients.text","rt");
    if (fp==NULL){
        printf("ERREUR\n");
        exit(1);
    }
    else{
            char neam[12],scneam[20];


    printf("Enter the Client Id :\n");
    scanf("%s",Idn);
    strcpy(Res.IdClient,Idn);

    while(!feof(fp))
    {
        fscanf(fp,"%s   %s   %s    %s    %s   %s    %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass);
        if(strcmp(C1.IdClient,Idn)==0)
        {
            tr=1;
            break;
        }
    }
    fclose(fp);
    if(tr==1){
    }
    else
    printf("The Client doesn't exist!!!!!\n");
	}
	return tr;
}
// fiin fonction de recherche d'un client mode fr
int RechercherClient22(){

	Client C1;
	char Idn[20];
    int codeR, tr=0;
    fp=fopen("Clients.text","rt");
    if (fp==NULL){
        printf("ERREUR\n");
        exit(1);
    }
    else{
            char neam[12],scneam[20];


    printf("Entre l'ID de Client :\n");
    scanf("%s",Idn);
    strcpy(Res.IdClient,Idn);

    while(!feof(fp))
    {
        fscanf(fp,"%s   %s   %s    %s    %s   %s    %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass);
        if(strcmp(C1.IdClient,Idn)==0)
        {
            tr=1;
            break;
        }
    }
    fclose(fp);
    if(tr==1){
    }
    else
    printf("Le client n'existe pas!!!!!\n");
	}
	return tr;
}

//fonction suprimer client mode francais
void SuprimerClient(){

			Client C1,C2;
	char Id[20],TR[20];
    int codeR, tr=0;
    fp=fopen("Clients.text","r");
    if (fp==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
 fpm=fopen("temp.txt","wt");
 if (fpm==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    	printf("Enter l'Id de client a Supprimer \n");scanf("%s",Id);
    	strcpy(TR,Id);
    		while(fscanf(fp,"%s   %s   %s    %s    %s   %s   %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass)==7)
    	{
    		if(strcmp(Id,C1.IdClient)!=0)
    			   fprintf(fpm,"%s   %s   %s    %s    %s   %s   %s\n",C1.Nom,C1.Prenom,C1.Adressse,C1.NumAbonnement,C1.NumConteur,C1.IdClient,C1.Mot_pass);
            else
                  tr=1;
	}

    		fclose(fp);fclose(fpm);
		remove("Clients.text");
		rename("temp.txt","Clients.text");
		 fp4=fopen("AdresseComp.text","a+");
    if (fp4==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
 fpm=fopen("temp.txt","wt");
 if (fpm==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    		while(fscanf(fp4,"%s  %s  %s  %s  \n",&Id,&C1.Adressse,&C1.Cartier,&C1.residence)==4)
    	{
    		if(strcmp(Id,TR)!=0)
    			   fprintf(fpm,"%s  %s  %s  %s  \n",&Id,&C1.Adressse,&C1.Cartier,&C1.residence);
            else
                  tr=1;
	}

    		fclose(fp4);fclose(fpm);
		remove("AdresseComp.text");
		rename("temp.txt","AdresseComp.text");
		 fp5=fopen("ID_and_Passowrd.text","a+");
		  fpm=fopen("temp.txt","wt");
    if (fp5==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    int tr3=0;
    while(!feof(fp5)){

             fscanf(fp5,"%s  %s  \n",aide.IdClient,C1.Mot_pass);
             if(strcmp(Id,aide.IdClient)!=0)
                fprintf(fpm,"%s  %s  \n",aide.IdClient,C1.Mot_pass);
                    else tr3=1;
    }
    fclose(fp5);fclose(fpm);
		remove("ID_and_Passowrd.text");
		rename("temp.txt","ID_and_Passowrd.text");
		if(tr==0)
		printf("Client n'existe pas !!!!'");
		else
		printf("Modification est efectuee !");






}
// fin fonction suprimer client

//fonction suprimer client mode english
void SuprimerClient1(){

			Client C1,C2;
	char Id[20],TR[20];
    int codeR, tr=0;
    fp=fopen("Clients.text","r");
    if (fp==NULL){
        printf("Impossible to open the file \n");
        exit(1);
    }
 fpm=fopen("temp.txt","wt");
 if (fpm==NULL){
        printf("Impossible to open the file \n");
        exit(1);
    }
    	printf("Enter Client Id a delet\en");scanf("%s",Id);
    		while(fscanf(fp,"%s   %s   %s    %s    %s   %s   %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass)==7)
    	{
    		if(strcmp(Id,C1.IdClient)!=0)
    			   fprintf(fpm,"%s   %s   %s    %s    %s   %s   %s\n",C1.Nom,C1.Prenom,C1.Adressse,C1.NumAbonnement,C1.NumConteur,C1.IdClient,C1.Mot_pass);
            else
                  tr=1;
	}
fclose(fp);fclose(fpm);
		remove("Clients.text");
		rename("temp.txt","Clients.text");
		 fp4=fopen("AdresseComp.text","a+");
    if (fp4==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
 fpm=fopen("temp.txt","wt");
 if (fpm==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    		while(fscanf(fp4,"%s  %s  %s  %s  \n",&Id,&C1.Adressse,&C1.Cartier,&C1.residence)==4)
    	{
    		if(strcmp(Id,TR)!=0)
    			   fprintf(fpm,"%s  %s  %s  %s  \n",&Id,&C1.Adressse,&C1.Cartier,&C1.residence);
            else
                  tr=1;
	}

    		fclose(fp4);fclose(fpm);
		remove("AdresseComp.text");
		rename("temp.txt","AdresseComp.text");
		 fp5=fopen("ID_and_Passowrd.text","a+");
		  fpm=fopen("temp.txt","wt");
    if (fp5==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    int tr3=0;
    while(!feof(fp5)){

             fscanf(fp5,"%s  %s  \n",aide.IdClient,C1.Mot_pass);
             if(strcmp(Id,aide.IdClient)!=0)
                fprintf(fpm,"%s  %s  \n",aide.IdClient,C1.Mot_pass);
                    else tr3=1;
    }
    fclose(fp5);fclose(fpm);
		remove("ID_and_Passowrd.text");
		rename("temp.txt","ID_and_Passowrd.text");
		if(tr==0)
		printf("Clientnot found !!!!'");
		else
		printf("modification valide thanks");


}
// fin fonction suprimer client mode english
// fin fct about Client



  // fin fonction affichage fichies des clients
void afficheId_Adresse()
{
    char c;
    Client C1;
    fp6=fopen("AdresseComp.text","r");
     if(fp6==NULL){
        printf("Echec d'overture :\n\n");
        exit(1);
 }else{
        printf("\tLes adresses des Clients sont:\n");
        firstrow();
      while(!feof(fp6)){
             fscanf(fp6,"%s  %s  %s  %s  \n",Id,C1.Adressse,C1.Cartier,C1.residence);
            midtext();  printf("\t\tl'Id:%s \n \t\t\tVille:%s   \n \t\t\tCartier:%s \n\t\t\tResidence:%s",Id,C1.Adressse,C1.Cartier,C1.residence);
            midrows();
    }

   fclose(fp6);
     lastrow();
 }
}

void afficheId_Adresse1()
{
    char c;
    Client C1;
    fp6=fopen("AdresseComp.text","r");
     if(fp6==NULL){
        printf("Echec d'overture :\n\n");
        exit(1);
 }else{
       printf("\n\n----------------------------------------------------\n\n");
        firstrow();
      while(!feof(fp6)){
             fscanf(fp6,"%s  %s  %s  %s  \n",Id,C1.Adressse,C1.Cartier,C1.residence);
            midtext();  printf("\t\tl'Id:%s \n \t\t\tVille:%s   \n \t\t\tCartier:%s \n\t\t\tResidence:%s",Id,C1.Adressse,C1.Cartier,C1.residence);
            midrows();
    }

   fclose(fp6);
     lastrow();
 }
}


void afficheId_mdp()
{
    char c;
    Client C1;
    fp6=fopen("ID_and_Passowrd.text","r");
     if(fp6==NULL){
        printf("Echec d'overture :\n\n");
        exit(1);
 }else{
       printf("\n\n------------------------------lES Ids et les Mots de passe----------------------\n\n");
       firstrow();
      while(!feof(fp6)){
    fscanf(fp6,"%s  %s  \n",C1.IdClient,C1.Mot_pass);
    midtext(); printf("L'Id :%s  Mot_de_pass:%s",C1.IdClient,C1.Mot_pass);
midrows();
    }

   fclose(fp6);
   lastrow();
 }
}

void afficheId_mdp1()
{
    char c;
    Client C1;
    fp6=fopen("ID_and_Passowrd.text","r");
     if(fp6==NULL){
        printf("Echec d'overture :\n\n");
        exit(1);
 }else{
       printf("\n\n------------------------------lES FACTURES EXISTE SONT----------------------\n\n");
       printf("ID--PASSWORD\n");
       firstrow();
      while(!feof(fp6)){
    fscanf(fp6,"%s  %s  \n",C1.IdClient,C1.Mot_pass);
    midtext(); printf("L'Id :%s  Mot_de_pass:%s",C1.IdClient,C1.Mot_pass);
midrows();
    }

   fclose(fp6);
   lastrow();
 }
}


//fct ajouter Facture mode francias
void AjouterFacture2()
{
  Client C1;
  char NF[20],Id[20];
  int tr,tr2;
  tr2=0;
  tr=0;
  int n,n2;
  n=RechercherClient22();
  //n2=RechercherFacture();
  if(n==0)
    exit(1);
    if(n==1)
    {
        if(n2!=1)
        {
           fp1=fopen("Factures.text","a+");
            printf("\nEntrer le Montant mensuel en DH : \n");
            scanf("%f",&F1.Montant);
            printf("Entrer la Consommation mensuelle en KWh: \n");
            scanf("%f",&F1.Consommation);
            printf("Entrer La Date Limite: J/M/A:  \n");
            scanf("%d",&F1.Limite.jour);
            scanf("%d",&F1.Limite.mois);
            scanf("%d",&F1.Limite.annee);
            printf("Entrer La Date de Sortie: J/M/A:\n");
            scanf("%d",&F1.sortie.jour);
            scanf("%d",&F1.sortie.mois);
            scanf("%d",&F1.sortie.annee);
            fprintf(fp1,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",Res.Num_Facture,Res.IdClient,F1.Montant,F1.Consommation,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);

    }
    fclose(fp1);

}

    fclose(fp);


}
// fin fct ajouter Facture mode francias


//fct ajouter Facture mode english
void AjouterFacture1()
{
  Client C1;
  char NF[20],Id[20];
  int tr,tr2;
  tr2=0;
  tr=0;
  int n,n2;
  n=0;
  n2=0;
  n=RechercherClient1();
  //n2=RechercherFacture1();
    if(n==1)
    {
        if(n2==0)
        {
           fp1=fopen("Factures.text","a+");
            printf("\nGive the monthly consumption in DH : \n");
            scanf("%f",&F1.Montant);
            printf("Give the monthly consumption in DH: \n");
            scanf("%f",&F1.Consommation);
            printf("Give the deadline for payment: J/M/A:  \n");
            scanf("%d",&F1.Limite.jour);
            scanf("%d",&F1.Limite.mois);
            scanf("%d",&F1.Limite.annee);
            printf("Give the Invoice release date:\n");
            scanf("%d",&F1.sortie.jour);
            scanf("%d",&F1.sortie.mois);
            scanf("%d",&F1.sortie.annee);
            fprintf(fp1,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",Res.Num_Facture,Res.IdClient,F1.Montant,F1.Consommation,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);

    }
    fclose(fp1);

}

    fclose(fp);


}

// fin fct ajouter Facture mode english
//fct aficher facture mode francais
void afficherFactures()
{
    char c;
    Client C1;
    fp6=fopen("Factures.text","r");
     if(fp6==NULL){
        printf("Impossible d'ouvrir le fichier :\n\n");
        exit(1);
 }else{
       printf("\n\n------------------------------Les Factures qui existent sont:----------------------\n\n");
      firstrow();
      while(!feof(fp6)){
            fscanf(fp6,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",&Res.Num_Facture,&Res.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
            midtext();  printf("\n\t\t\tNumero de Facture :    %s\n\t\t\tId de client :    %s\n\t\t\t Montant:     %f DH\n\t\t\t Consomation en :    %f(W)\n\t\t\tDate limite de payemen de facture :  %d/%d/%d\n \t\t\tDate de sorite de facture :   %d/%d/%d\n",Res.Num_Facture,Res.IdClient,F1.Montant,F1.Consommation,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);
            midrows();

    }
      lastrow();
   fclose(fp6);
 }
}
// fin fct aficher facture mode English

void afficherFactures1()
{
    char c;
    Client C1;
    fp6=fopen("Factures.text","r");
     if(fp6==NULL){
        printf("Impossible d'ouvrir le fichier :\n\n");
        exit(1);
 }else{
       printf("\n\n------------------------------Les Factures qui existent sont:----------------------\n\n");
      firstrow();
      while(!feof(fp6)){
            fscanf(fp6,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",&Res.Num_Facture,&Res.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
            midtext();  printf("\n\t\t\tNumero de Facture :    %s\n\t\t\tId de client :    %s\n\t\t\t Montant:     %f DH\n\t\t\t Consomation en :    %f(W)\n\t\t\tDate limite de payemen de facture :  %d/%d/%d\n \t\t\tDate de sorite de facture :   %d/%d/%d\n",Res.Num_Facture,Res.IdClient,F1.Montant,F1.Consommation,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);
            midrows();

    }
      lastrow();
   fclose(fp6);
 }
}
// fin fct aficher facture mode English
//
void ValiderPaiement(){
    FILE *fp,*fp1;
    char id[20];
    int tr=0;
printf("Entrer le numero de facture\n");
scanf("%s",id);
fp=fopen("Factures.text","a+");
    if(fp==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
}
fp1=fopen("Factures_payées.text","a+");
if(fp1==NULL){
    printf("Impossible d'ouvrir le fichier \n");
    exit(1);
}
while(!feof(fp)){
    fscanf(fp,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
    if(strcmp(id,F1.Num_Facture)==0){
        fprintf(fp1,"%s  %s  %.2f  %.2f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,F1.Montant,F1.Consommation,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);
        tr=1;
        break;
    }
}
if(tr==1){

    printf("Paiement validé\n");
}
else
    printf("client n'existe pas\n");
fclose(fp);
fclose(fp1);
}
//fonction valider mode anglais
void ValiderPaiement1(){
    FILE *fp,*fp1;
    char id[20];
    int tr=0;
printf("Enter the Invoice Number\n");
scanf("%s",id);
fp=fopen("Factures.text","a+");
    if(fp==NULL){
        printf("Impossible to Open the File \n");
        exit(1);
}
fp1=fopen("Factures_payées.text","a+");
if(fp1==NULL){
    printf("Impossible to Open the File \n");
    exit(1);
}
while(!feof(fp)){
    fscanf(fp,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
    if(strcmp(id,F1.Num_Facture)==0){
        fprintf(fp1,"%s  %s  %.2f  %.2f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,F1.Montant,F1.Consommation,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);
        tr=1;
        break;
    }
}
if(tr==1){

    printf("Payment validated\n");
}
else
    printf("client doesn't exist\n");
fclose(fp);
fclose(fp1);
}

//fct modifier mode fr
void  ModifierFacture(){
	char Id[20],M[4];
    int tr=0;
    FILE *f;
    fp1=fopen("Factures.text","rt");
    if (fp1==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
 	f=fopen("nvFactures.text","wt");
 	if(f==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
   	printf("donner le numero de facture que vous voulez modifier \n");scanf("%s",M);
   	while(!feof(fp1))
    {
        fscanf(fp1,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
        if(strcmp(M,F1.Num_Facture)==0){
            tr=1;
            printf("Donner le nouveau montant mensuel : \n");
            scanf("%f",&F1.Montant);
            printf("Donner la nouvelle consommation mensuelle: \n");
            scanf("%f",&F1.Consommation);
            printf("Donner la nouvelle date limite de payement:\n");
            scanf("%d",&F1.Limite.jour);
            scanf("%d",&F1.Limite.mois);
            scanf("%d",&F1.Limite.annee);
            printf("Donner la nouvelle date de sortie de Facture:\n");
            scanf("%d",&F1.sortie.jour);
            scanf("%d",&F1.sortie.mois);
            scanf("%d",&F1.sortie.annee);
        }
        fprintf(f,"%s  %s  %.2f  %.2f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,F1.Montant,F1.Consommation,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);

    }
   	fclose(fp1);fclose(f);
   	remove("Factures.text");
   	rename("nvFactures.text","Factures.text");
   	if(tr==0)
        printf("Facture n'existe pas !!!!'");
    else
        printf("modification enregistrée");

}
//fin fct modifier facture mode fr

//


//fct modifier mode english
void  ModifierFacture1(){
	char Id[20],M[4];
    int tr=0;
    FILE *f;
    fp1=fopen("Factures.text","rt");
    if (fp1==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
 	f=fopen("nvFactures.text","wt");
 	if(f==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
   	  	printf("donner le Mois  de facture que vous voulez modifier \n");scanf("%s",M);
   	while(!feof(fp1))
    {
        fscanf(fp1,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
        if(strcmp(M,F1.Num_Facture)==0){
            tr=1;
            printf("Donner le nouveau montant mensuel : \n");
            scanf("%f",&F1.Montant);
            printf("Donner la nouvelle consommation mensuelle: \n");
            scanf("%f",&F1.Consommation);
            printf("Donner la nouvelle date limite de payement:\n");
            scanf("%d",&F1.Limite.jour);
            scanf("%d",&F1.Limite.mois);
            scanf("%d",&F1.Limite.annee);
            printf("Donner la nouvelle date de sortie de Facture:\n");
            scanf("%d",&F1.sortie.jour);
            scanf("%d",&F1.sortie.mois);
            scanf("%d",&F1.sortie.annee);
        }
        fprintf(f,"%s  %s  %.2f  %.2f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,F1.Montant,F1.Consommation,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);

    }
   	fclose(fp1);fclose(f);
   	remove("Factures.text");
   	rename("nvFactures.text","Factures.text");
   	if(tr==0)
        printf("Facture n'existe pas !!!!'");
    else
        printf("modification enregistrée");

}

//fin fct modifier facture mode english

//recherche Facture mode francais
int RechercherFacture(){
	char NF[20],Id[4];
	int tr=0;
	fp1=fopen("Factures.text","r");
    if(fp1==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    printf("entrer le Numero de facture que vous chercher\n");
    scanf("%s",NF);
    while(!feof(fp1)){
    	fscanf(fp1,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
    	if(strcmp(NF,F1.Num_Facture)==0){
            tr=1;
            strcpy(Res.Num_Facture,NF);
            strcpy(Res.Num_Facture,F1.IdClient);
    		printf("Numero de facture:%s\n",F1.Num_Facture);
    		printf("Id de Client:%s\n",F1.IdClient);
    		printf("Montant:%.2f\n",F1.Montant);
    		printf("Consommation:%.2f\n",F1.Consommation);
    		printf("Date de Sortie:%d %d %d\n",F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);
    		printf("Date de Limite:%d %d %d\n",F1.Limite.jour,F1.Limite.mois,F1.Limite.annee);
    		break;
		}

	}
    if(tr==0)
        //printf("Cette facture n'existe pas!!!!");
fclose(fp1);
  return tr;

}

//fin recherche Facture mode francais

int RechercherFacture1(){
	char NF[20];
	int tr2=0;

	fp1=fopen("Factures.text","r");
    if(fp1==NULL){
        printf("Impossible  to open the file \n");
        exit(1);
    }
    printf("Give the Number  of Facture \n");
    scanf("%s",NF);
    strcpy(Res.Num_Facture,NF);
    while(!feof(fp1)){
    	fscanf(fp1,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
    	if(strcmp(NF,F1.Num_Facture)==0){
            tr2=1;
            printf("cette Numero de Facture deja Utilisee :");
            if(tr2!=1){
    		printf("Numero de facture:%s\n",F1.Num_Facture);
    		printf("Id de Client:%s\n",F1.IdClient);
    		printf("Montant:%.2f\n",F1.Montant);
    		printf("Consommation:%.2f\n",F1.Consommation);
    		printf("Date de Sortie:%d %d %d\n",F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);
    		printf("Date de Limite:%d %d %d\n",F1.Limite.jour,F1.Limite.mois,F1.Limite.annee);
    		break;
		}
    	}
	}
    if(tr2==0)
fclose(fp1);
   return tr2;

}
//fin fct mode english

//sup facture mode fr
void SupprimerFacture(){
	char Id[20],Id1[20];
    int  tr=0;
    FILE *fs;
    fp1=fopen("Factures.text","r");
    if(fp1==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
 	fs=fopen("temp.text","wt");
 	if (fs==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    printf("donner le numero de facture a Supprimer \n");scanf("%s",Id);

    while(!feof(fp1))
    	{
    		fscanf(fp1,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
    		if(strcmp(Id,F1.Num_Facture)!=0)
    			   fprintf(fs,"%s  %s  %.2f  %.2f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,F1.Montant,F1.Consommation,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);
            else
                  tr=1;
	}

    fclose(fp1);fclose(fs);
	remove("Factures.text");
	rename("temp.text","Factures.text");
	if(tr==0)
		printf("Client n'existe pas !!!!'");
	else
		printf("modification est efectuee");


}
//fin fct


//sup facture mode english
void SupprimerFacture1(){
	char Id[20],Id1[20];
    int  tr=0;
    FILE *fs;
    fp1=fopen("Factures.text","r");
    if(fp1==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
 	fs=fopen("temp.text","wt");
 	if (fs==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    printf("donner Id de facture a Supprimer \n");scanf("%s",Id);
    printf("donner NUmero de facture a Supprimer \n");scanf("%s",Id1);
    while(!feof(fp1))
    	{
    		fscanf(fp1,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
    		if(strcmp(Id1,F1.Num_Facture)!=0&&strcmp(Id,F1.IdClient)!=0)
    			   fprintf(fs,"%s  %s  %.2f  %.2f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,F1.Montant,F1.Consommation,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);
            else
                  tr=1;
	}

    fclose(fp1);fclose(fs);
	remove("Factures.text");
	rename("temp.text","Factures.text");
	if(tr==0)
		printf("Client n'existe pas !!!!'");
	else
		printf("modification est efectuee");


}

//fin fct mode english

//fonction afficher factures payees
void afficherFacturesPayees()
{
    char c;
    fp1=fopen("Factures_payées.text","a+");
    if(fp1==NULL){
        printf("Echec d'ouverture :\n\n");
        exit(1);
 }  else{
       printf("\n\n------------------------------les Factures Payées-----------------------\n\n");
         firstrow();
      while(!feof(fp1)){
            fscanf(fp1,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",&Res.Num_Facture,&Res.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
            midtext();  printf("\n\t\t\tNumero de Facture :    %s\n\t\t\tId de client :    %s\n\t\t\t Montant:     %.2f DH\n\t\t\t Consomation en :    %.2f(W)\n\t\t\tDate limite de payemen de facture :  %d/%d/%d\n \t\t\tDate de sorite de facture :   %d/%d/%d\n",Res.Num_Facture,Res.IdClient,F1.Montant,F1.Consommation,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);
            midrows();

    }
      lastrow();
   fclose(fp1);
 }
}
//fonction affiche factures payees mode anglais
void afficherFacturesPayees1()
{
    char c;
    fp1=fopen("Factures_payées.text","a+");
    if(fp1==NULL){
        printf("Echec d'ouverture :\n\n");
        exit(1);
 }  else{
       printf("\n\n------------------------------Paid Invoices-----------------------\n\n");
         firstrow();
      while(!feof(fp1)){
            fscanf(fp1,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",&Res.Num_Facture,&Res.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
            midtext();  printf("\n\t\t\tNumero de Facture :    %s\n\t\t\tId de client :    %s\n\t\t\t Montant:     %.2f DH\n\t\t\t Consomation en :    %.2f(W)\n\t\t\tDate limite de payemen de facture :  %d/%d/%d\n \t\t\tDate de sorite de facture :   %d/%d/%d\n",Res.Num_Facture,Res.IdClient,F1.Montant,F1.Consommation,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);
            midrows();

    }
      lastrow();
   fclose(fp1);
 }
}


//fonction modifier les informations

void Mod_mes_informations(){
    system("cls");
		Client C1;
	FILE *fp,*fpm;
    fp=fopen("Clients.text","r");
    if (fp==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
 fpm=fopen("temp.txt","wt");
 if (fpm==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    	while(fscanf(fp,"%s   %s   %s    %s    %s   %s   %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass)==7)
    	{
    		if(strcmp(V.IdClient,C1.IdClient)==0)
    		{
                    printf("\nDonnez le nouveau Adresse     :\t");
                    scanf("%s", C1.Adressse);
                    printf("Donnez le nouveau mot de passe  :\t");
                    scanf("%s", C1.Mot_pass);

   }
       fprintf(fpm,"%s   %s   %s    %s    %s   %s   %s\n",C1.Nom,C1.Prenom,C1.Adressse,C1.NumAbonnement,C1.NumConteur,C1.IdClient,C1.Mot_pass);

		}
		fclose(fp);fclose(fpm);
		remove("Clients.text");
		rename("temp.txt","Clients.text");
        printf("\nles modification a ete effectuee avec succes\n");
        }
//fonction afficher facture
void MaFacture(){
     system("cls");
    Facture F1;
    FILE *fp;
    int tmp=0;
    fp=fopen("Factures.text","r");
     if(fp==NULL){
        printf("Echec d'ouverture !!!!!!\n\n");
        exit(1);
 }else{
      while(!feof(fp))
    {
        fscanf(fp,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",&F1.Num_Facture,&F1.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
        if(strcmp(F1.IdClient,V.IdClient)==0){
       printf("\n\n**************************************votre facture d'electricite*************************************************\n");
       printf("                                                                                                                    \n");
       printf(" Numero_Facture |  Id_Client  |  Montant(en DH)  |  Consommation(en KWh)  |  Date_sortie     |  Date_Limite         \n");
       printf("   %s         %s          %.2f            %.2f               %d/%d/%d           %d/%d/%d       \n\n",F1.Num_Facture,F1.IdClient,F1.Montant,F1.Consommation,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee);
       printf("******************************************************************************************************************\n");
 }}
 }
 fclose(fp);
}

//fonction payer facture
void Payer_ma_facture(){
    system("cls");
     char confirmation[3];
     carte_bancaire B1;
     Client C1;
     Facture F1;
     FILE *fc,*fp;
     fp=fopen("Factures.text","r");
     printf("\n****************************************** PAIEMENT PAR UN COMPTE BANCAIRE *****************************************\n\n");
     while(!feof(fp))
    {
        fscanf(fp,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",&F1.Num_Facture,&F1.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
        if(strcmp(F1.IdClient,V.IdClient)==0){
      printf("-->>>S'il vous plait entrez les informations suivantes :\n\n");
      printf("le nom du porteur de la carte    :\t");
      scanf("%s",&B1.nom_p);
      printf("le prenom du porteur de la carte :\t");
      scanf("%s",&B1.prenom_p);
      printf("le numero de carte de paiement   :\t");
      scanf("%d",&B1.Num_carte);
      printf("le code de verification          :\t");
      scanf("%d",&B1.Num_verif);
      printf("vous etes sur(Oui ou Non)!!!!!!!!!!     :\t");
      scanf("%s",&confirmation);
      if(strcmp(confirmation,"oui")==0 || strcmp(confirmation,"OUI")==0){
        printf("\n\nVotre paiement a ete effectuee avec succes\n\n");
        fc=fopen("Factures_payées.txt","a");
        fprintf(fc,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,F1.Montant,F1.Consommation,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);
        fclose(fc);
      }
      }
      }
      fclose(fp);
 }
//menu

 void menu(){
  int choix2;
  system("cls");

  do{
                  printf("\n\n\n");
                    printf("                                       ******************************************** \n");
                    printf("                                       |                  BIENVENUE               |\n");
                    printf("                                       |                                          |\n");
                    printf("                                       | 1---> Ma facture                         |\n");
                    printf("                                       | 2---> Payer ma facture                   |\n");
                    printf("                                       | 3---> Modifer mes informations           |\n");
                    printf("                                       | 4---> Deposer une reclamation            |\n");
                    printf("                                       | 0---> Quitter                            |\n");
                    printf("                                       |                                          |\n");
                    printf("                                       ********************************************\n");
                    printf("Entrez votre choix :\t ");
                    scanf("%d",&choix2); switch(choix2){
                        case 1 :MaFacture();break;
                        case 2 :Payer_ma_facture(); break;
                        case 3 :Mod_mes_informations();break;
                        //case 4 :Reclamation();break;
                    }
                   }while(choix2!=0);
                   system("cls");

}
//fonction login
int Login2(){

	Client C1;
    int tr=0;
    FILE *fp;
    fp=fopen("Clients.text","rt");
    if (fp==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    else{
            char scneam[20],neam[12];

    printf("Entrez votre ID           :\t");
    scanf("%s", &neam);
    printf("Entrez votre mot de passe :\t");
    scanf("%s", &scneam);
    strcpy(V.IdClient,neam);

    while(!feof(fp))
    {
        fscanf(fp,"%s   %s   %s    %s    %s   %s    %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass);
        if(strcmp(C1.IdClient,neam)==0&&strcmp(C1.Mot_pass,scneam)==0)
        {
            tr=1;
            break;
        }
    }
    fclose(fp);
    system("cls");
    }
return tr;
}
//fonction sign up
void SignUp(){
     FILE *fc,*fp4;
     Client Nv;
     fc=fopen("Clients.text","a+");
     printf("-->>>S'il vous plait entrez les informations suivantes :\n\n");
     printf("\t\tVotre Nom                  :\t");
     scanf("%s",&Nv.Nom);
     printf("\t\tVotre Prenom               :\t");
     scanf("%s",&Nv.Prenom);

     printf("\t\tVotre numero d'abonnement  :\t");
     scanf("%s",&Nv.NumAbonnement);
     printf("\t\tnumero de Compteur         :\t");
     scanf("%s",&Nv.NumConteur);
     printf("\t\tChoisissez un identifiant  :\t ");
     scanf("%s",&Nv.IdClient);
     printf("\t\tChoisissez un mot de passe :\t");
     scanf("%s",&Nv.Mot_pass);
     printf("\t\tVotre ville                :\t");
     scanf("%s",&Nv.Adressse);
     fp4=fopen("AdresseComp.text","a+");
    if (fp4==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    else{
         printf("\t\tLe Nom de votre cartier    :\t");
         scanf("%s",Nv.Cartier);
         printf("\t\tLe Num de votre residence  :\t");
         scanf("%s",Nv.residence);
         fprintf(fp4,"%s  %s  %s  %s  \n",Nv.IdClient,Nv.Adressse,Nv.Cartier,Nv.residence);

    }
    fclose(fp4);

     fprintf(fc,"%s   %s   %s   %s   %s   %s   %s\n",Nv.Nom,Nv.Prenom,Nv.Adressse,Nv.NumAbonnement,Nv.NumConteur,Nv.IdClient,Nv.Mot_pass);
     fclose(fc);
     system("cls");
}

//fonction reclamation
void reclamation(){
    FILE *fp4;
 char Comment[100];
fp4=fopen("Demande_des_clients.text","a+");
    if (fp4==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    else{


         getchar();
         printf("Deposez votre demande :\t ");
         gets(Comment);
         printf("\n\nVotre demande a bien ete enregistree et sera traitee dans les plus brefs delais");
         getchar();
         fprintf(fp4,"%s   :%s\n",V.IdClient,Comment);
fclose(fp4);
}
system("cls");
}
void Mod_mes_informations1(){
    system("cls");
		Client C1;
	FILE *fp,*fpm;
    fp=fopen("Clients.text","r");
    if (fp==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
 fpm=fopen("temp.txt","wt");
 if (fpm==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    	while(fscanf(fp,"%s   %s   %s    %s    %s   %s   %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass)==7)
    	{
    		if(strcmp(V.IdClient,C1.IdClient)==0)
    		{
                    printf("\nGive the new Address      :\t");
                    scanf("%s", C1.Adressse);
                    printf("Give the new password       :\t");
                    scanf("%s", C1.Mot_pass);

   }
       fprintf(fpm,"%s   %s   %s    %s    %s   %s   %s\n",C1.Nom,C1.Prenom,C1.Adressse,C1.NumAbonnement,C1.NumConteur,C1.IdClient,C1.Mot_pass);

		}
		fclose(fp);fclose(fpm);
		remove("Clients.text");
		rename("temp.txt","Clients.text");
        printf("\nthe changes have been made successfully\n");
        }

        void MaFacture1(){
     system("cls");
    Facture F1;
    FILE *fp;
    int tmp=0;
    fp=fopen("Factures.text","r");
     if(fp==NULL){
        printf("Echec d'ouverture !!!!!!\n\n");
        exit(1);
 }else{
      while(!feof(fp))
    {
        fscanf(fp,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",&F1.Num_Facture,&F1.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
        if(strcmp(F1.IdClient,V.IdClient)==0){
       printf("\n\n**************************************your electricity bill*************************************************\n");
       printf("                                                                                                                    \n");
       printf(" Bill number |  Client_ID  |  Amount (in DH)  |  Consumption (in KWh)  |  Release_date     |  Deadline         \n");
       printf("   %s         %s          %.2f            %.2f               %d/%d/%d           %d/%d/%d       \n\n",F1.Num_Facture,F1.IdClient,F1.Montant,F1.Consommation,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee);
       printf("******************************************************************************************************************\n");
 }}
 }
 fclose(fp);
}

void Payer_ma_facture1(){
    system("cls");
     char confirmation[3];
     carte_bancaire B1;
     Client C1;
     Facture F1;
     FILE *fc,*fp;
     fp=fopen("Factures.text","r");
     printf("\n****************************************** PAIEMENT PAR UN COMPTE BANCAIRE *****************************************\n\n");
     while(!feof(fp))
    {
        fscanf(fp,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",&F1.Num_Facture,&F1.IdClient,&F1.Montant,&F1.Consommation,&F1.Limite.jour,&F1.Limite.mois,&F1.Limite.annee,&F1.sortie.jour,&F1.sortie.mois,&F1.sortie.annee);
        if(strcmp(F1.IdClient,V.IdClient)==0){
      printf("-->>>Please enter the following information :\n\n");
      printf("The second name of the card holder    :\t");
      scanf("%s",&B1.nom_p);
      printf("The first name of the card holder     :\t");
      scanf("%s",&B1.prenom_p);
      printf("Payment card number                   :\t");
      scanf("%d",&B1.Num_carte);
      printf("Verification code                     :\t");
      scanf("%d",&B1.Num_verif);
      printf("Are you  sure (Yes or No)!!!!!!       :\t");
      scanf("%s",&confirmation);
      if(strcmp(confirmation,"yes")==0 || strcmp(confirmation,"YES")==0){
        printf("\n\nYour payment has been made successfully\n\n");
        fc=fopen("Factures_payées.txt","a");
        fprintf(fc,"%s  %s  %f  %f  %d  %d  %d  %d  %d  %d\n",F1.Num_Facture,F1.IdClient,F1.Montant,F1.Consommation,F1.Limite.jour,F1.Limite.mois,F1.Limite.annee,F1.sortie.jour,F1.sortie.mois,F1.sortie.annee);
        fclose(fc);
      }
      }
      }
      fclose(fp);
 }

 void menu1(){
  int choix2;
  system("cls");

  do{
                  printf("\n\n\n");
                    printf("                                       ******************************************** \n");
                    printf("                                       |                  BIENVENUE               |\n");
                    printf("                                       |                                          |\n");
                    printf("                                       | 1---> My bill                            |\n");
                    printf("                                       | 2---> pay my bill                        |\n");
                    printf("                                       | 3---> Modify my information              |\n");
                    printf("                                       | 4---> File a complaint                   |\n");
                    printf("                                       | 0---> Leave                              |\n");
                    printf("                                       |                                          |\n");
                    printf("                                       ********************************************\n");
                    printf("Enter your choice :\t ");
                    scanf("%d",&choix2); switch(choix2){
                        case 1 :MaFacture1();break;
                        case 2 :Payer_ma_facture1(); break;
                        case 3 :Mod_mes_informations1();break;
                        //case 4 :Reclamation1();break;
                    }
                   }while(choix2!=0);
                   system("cls");

}


int Login21(){

	Client C1;
    int tr=0;
    FILE *fp;
    fp=fopen("Clients.text","rt");
    if (fp==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    else{
            char scneam[20],neam[12];

    printf("Enter your ID          :\t");
    scanf("%s", &neam);
    printf("Enter your password    :\t");
    scanf("%s", &scneam);
    strcpy(V.IdClient,neam);

    while(!feof(fp))
    {
        fscanf(fp,"%s   %s   %s    %s    %s   %s    %s\n",&C1.Nom,&C1.Prenom,&C1.Adressse,&C1.NumAbonnement,&C1.NumConteur,&C1.IdClient,&C1.Mot_pass);
        if(strcmp(C1.IdClient,neam)==0&&strcmp(C1.Mot_pass,scneam)==0)
        {
            tr=1;
            break;
        }
    }
    fclose(fp);
    system("cls");
    }
return tr;
}
void SignUp1(){
     FILE *fc,*fp4;
     Client Nv;
     fc=fopen("Clients.text","a+");
     printf("-->>>Please enter the following information :\n\n");
     printf("\t\tYour first name                   :\t");
     scanf("%s",&Nv.Nom);
     printf("\t\tYour second name                  :\t");
     scanf("%s",&Nv.Prenom);

     printf("\t\tYour subscription number          :\t");
     scanf("%s",&Nv.NumAbonnement);
     printf("\t\tcounter number                    :\t");
     scanf("%s",&Nv.NumConteur);
     printf("\t\tchoose a user name (ID)           :\t ");
     scanf("%s",&Nv.IdClient);
     printf("\t\tchoose a password                 :\t");
     scanf("%s",&Nv.Mot_pass);
     printf("\t\tYour city                         :\t");
     scanf("%s",&Nv.Adressse);
     fp4=fopen("AdresseComp.text","a+");
    if (fp4==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    else{
         printf("\t\tThe name of your neighborhood     :\t");
         scanf("%s",Nv.Cartier);
         printf("\t\tYour residence number             :\t");
         scanf("%s",Nv.residence);
         fprintf(fp4,"%s  %s  %s  %s  \n",Nv.IdClient,Nv.Adressse,Nv.Cartier,Nv.residence);


    }
    fclose(fp4);

     fprintf(fc,"%s   %s   %s   %s   %s   %s   %s\n",Nv.Nom,Nv.Prenom,Nv.Adressse,Nv.NumAbonnement,Nv.NumConteur,Nv.IdClient,Nv.Mot_pass);
     fclose(fc);
     system("cls");
}


void reclamation1(){
 char Comment[100];
 FILE *fp4;
fp4=fopen("Demande_des_clients.text","a+");
    if (fp4==NULL){
        printf("Impossible d'ouvrir le fichier \n");
        exit(1);
    }
    else{


         getchar();
         printf("submit your request :\t ");
         gets(Comment);
         printf("\n\nYour request has been registered and will be processed as soon as possible");
         getchar();
         fprintf(fp4,"%s   :%s\n",V.IdClient,Comment);
fclose(fp4);
}
system("cls");
}



//bricoulage de menu
void menuA(){
	char langue[2],QR[3];
int op,tr,tr1;
int choix;
int Code;
char Mdp[23];
int i=0;
char ch;

printf("\n\n\n");
       firstrow();
        midtext();
        printf("\t\t\tVeuillez s'Identifier:\n");
        midtext();
        printf("\t\t\tA-Administrateur\n");
        midtext();
        printf("\t\t\tC-Client\n");
        lastrow();
        printf("\n\t");
        scanf("%s",&QR);
        system("cls");
         if(strcmp(QR,"A")==0||strcmp(QR,"a")==0){
             do{
                printf("\n\n");
                firstrow();
                midtext();
                printf("\n\n");
                printf("\t\t\t\tESPACE ADMINISTRATEUR\n");
                printf("\n");
                printf("\t\t\t\tSaisir votre ID:");
                scanf("%d",&Code);
                printf("\n");
                printf("\t\t\t\tSaisir votre mot de passe:");
                //scanf("%s",Mdp);
                while((ch = _getch()) !=13) {
                Mdp[i] = ch;
                i++;
                printf("*");
                }
                Mdp[i]='\0';
                system("cls");

             }while(Code!=1212&&strcmp(Mdp,"minara")!=1);
             system("cls");
                printf("\n\n\n");
        firstrow();
        midtext();
        printf("\t\t\tEffectuez votre choix:\n");
        midtext();
        printf("\t\t\t1-Gestion des Clients\n");
        midtext();
        printf("\t\t\t2-Gestion des Factures\n");
        lastrow();
        printf("\n\t");
            scanf("%d",&op);
        system("cls");
                if(op==1){
                        do{

                printf("\n\n\n");

                  printf("   \t\t       | GESTION DES CLIENTS |    : " );

                firstrow();
               midtext(); printf("->1) Ajouter un Client .                                              %c             ",186);
                midrows();
                midtext(); printf("->2) Consulter la base des Clients.                                   %c          "    ,186);
                 midrows();
               midtext() ; printf("->3) Modifier Les informations d'un Client  .                         %c              ",186);
                 midrows();
               midtext();  printf("->4) Rechercher un Client .                                           %c           ",186);
                 midrows();
               midtext();  printf("->5)  Supprimer un Client .                                           %c     ",186);
               midrows();
               midtext() ;  printf("->6) Consulter les Adresses des Clients                               %c      ",186);
                midrows();
               midtext()  ;printf("->7) Consulter Les Ids et Les Mots de passe des Clients               %c     ",186);
               midrows();
              midtext();printf("->8) Routour Menu principale                                          %c",186);
               	lastrow();
                printf("\n \t\Veuillez Saisir votre choix:\t ");scanf("%d",&choix);


                system("cls");
                switch(choix){
                case 1 :{ AjouterClient() ;break;}
                case 2 :{ afficheLesclientLi();break;}
                case 3 :{ModifficationInfoClient();break;}
                case 4 :{RechercherClient();break;}
                case 5 :{SuprimerClient();break;}
                case 6:{afficheId_Adresse();break;}
                case 7:{afficheId_mdp();break;}
              	case 8:{ menuA();
					break;
				}
                default:;
                }
                }while(choix!=0);
          }


         if(op==2){
                do {
//Menu de administrateur

                printf("\n\n\n");

                printf("                           | GESTION DES FACTURES   |\n" );
                 firstrow();
               midtext();   printf("->1) Ajouter une Facture                                              %c             ",186);
               midrows();
                midtext();printf("->2) Consulter la base des Factures.)                                 %c               ",186);
                midrows();
               midtext(); printf("->3) Modifier une Facture.                                            %c             ",186);
               midrows();
                midtext();printf("->4) Valider le payement  d'une Facture  .                            %c               ",186);
                midrows();
                midtext();printf("->5) Rechercher une Facture.                                          %c               ",186);
                midrows();
            midtext();printf("->6) Supprimer une facture    .                                       %c                   ",186);
            midrows();
         midtext();printf("->7) Consulter les Facture Payees                                     %c                     ",186);
         midrows();
          midtext();printf("->8) Retour au  menu principale                                       %c                 ",186);
              lastrow();
                  printf("\n\t\Veuillez Saisir votre choix:\t ");scanf("%d",&choix);
                 system("cls");
                switch(choix){
                case 1:{ AjouterFacture2();break;}
                case 2 :{afficherFactures() ;break;}
                case 3 :{ModifierFacture();break;}
                case 4 :{ValiderPaiement();break;}
                case 5:{RechercherFacture();break;}
                case 6:{SupprimerFacture();break;}
                case 7:{ afficherFacturesPayees();break;}
                case 8:{menuA();;break;}
                }

         }while(choix!=0);

    }


         }

          if(strcmp(QR,"C")==0||strcmp(QR,"c")==0){
                         do{

            printf("\n\n\n");

            printf("                      **                  BIENVENUE             **\n");
            firstrow();
            midtext(); printf(" 1---> Authentification                                               %c             ",186);
            midrows();
           midtext();  printf(" 2---> Se connecter                                                   %c             ",186);
           midrows();
           midtext();  printf(" 3---> Routure menu                                                   %c             ",186);
           lastrow();
            printf(" \n\t\tentre votre choix :\t ");
            scanf("%d",&choix);

            switch(choix){

            case 1:{
                printf("\nBonjour, nous sommes ravis de vous compter parmi nos nouveaux clients\n");
                printf("    Pour creer un compte, Suivez les etapes requises ci dessous:\n\n");
                SignUp();break;}
            case 2:{
                tr=Login2();
                if(tr==1)
                    menu();
                else
                    printf("\n\n-->>>Votre ID ou Mot de passe incorrect !!!!!!!!!!!!!!!! ");
                }
                	case 3:{ menuA();
					break;
				}
      }
      }while(choix!=0);

          }
}



void menuB(){
	 printf("\n\n\n");
	 char langue[2],QR[3];
int op,tr,tr1;
int choix;
int Code;
char Mdp[23];
int i=0;
char ch;
        firstrow();
        midtext();
        printf("\t\t\tPlease Login:\n");
        midtext();
        printf("\t\t\tA-Admin\n");
        midtext();
        printf("\t\t\tC-Client\n");
        lastrow();
        printf("\n\t");
        scanf("%s",&QR);
        system("cls");
         if(strcmp(QR,"A")==0||strcmp(QR,"a")==0){
             do{
                printf("\n\n");
                firstrow();
                midtext();
                printf("\n\n");
                printf("\t\t\t\tAdmin Space\n");
                printf("\n");
                printf("\t\t\t\tEnter your ID:");
                scanf("%d",&Code);
                printf("\n");
                printf("\t\t\t\tEnter your password:");
                //scanf("%s",Mdp);
                while((ch = _getch()) !=13) {
                Mdp[i] = ch;
                i++;
                printf("*");
                }
                Mdp[i]='\0';
                system("cls");

             }while(Code!=1212&&strcmp(Mdp,"minara")!=1);
             system("cls");
                printf("\n\n\n");
        firstrow();
        midtext();
        printf("\t\t\tMake your choice:\n");
        midtext();
        printf("\t\t\t1-Client Management\n");
        midtext();
        printf("\t\t\t2-Invoice Management\n");
        lastrow();
        printf("\n\t");
            scanf("%d",&op);
        system("cls");
                if(op==1){
                        do{

                printf("\n\n\n");

                  printf("   \t\t       | CLIENTS Management |    : " );

                firstrow();
               midtext(); printf("->1) Add Client                                                       %c             ",186);
                midrows();
               midtext(); printf("->2) Consult the Client Database                                      %c             ",186);
                 midrows();
               midtext() ;printf("->3) Modifier Les informations d'un Client                            %c              ",186);
                 midrows();
               midtext(); printf("->4) Search for a Client                                              %c              ",186);
                 midrows();
               midtext(); printf("->5) Delete a Client                                                  %c              ",186);
               midrows();
               midtext() ;printf("->6) Consult Client Addresses                                         %c              ",186);
                midrows();
               midtext() ;printf("->7) Consult Paying Clients Online Addresses                          %c               ",186);
               midrows();
              midtext();  printf("->8) back to menu                                                     %c               ",186);
               	lastrow();
                printf("\n \t\Make your Choice:\t ");scanf("%d",&choix);


                system("cls");
                switch(choix){
                case 1 :{ AjouterClient1() ;break;}
                case 2 :{ afficheLesclientLi1();break;}
                case 3 :{ModifficationInfoClient1();break;}
                case 4 :{RechercherClient1();break;}
                case 5 :{SuprimerClient1();break;}
                case 6:{afficheId_Adresse1();break;}
                case 7:{afficheId_mdp1();break;}
                case 8:{menuB();break;}
                default:;
                }
                }while(choix!=0);
          }


         if(op==2){
                do {
//Menu de administrateur

                printf("\n\n\n");

                printf("                           | INVOICE MANAGEMENT   |\n" );
                 firstrow();
               midtext();   printf("->1) Add Invoice                                                      %c            ",186);
               midrows();
                midtext();printf("->2) Consult the Invoices Database                                    %c             ",186);
                midrows();
               midtext(); printf("->3) Modify an Invoice                                                %c             ",186);
               midrows();
                midtext();printf("->4) Validate the payment of an Invoice                               %c             ",186);
                midrows();
                midtext();printf("->5) Search for an Invoice                                            %c             ",186);
                midrows();
            midtext();printf("->6) Delete an Invoice    .                                              %c              ",186);
            midrows();
         midtext();printf("->7) Consulter les Facture Payees                                           %c              ",186);
         midrows();
          midtext();printf("->8) back to menu                                                          %c              ",186);
              lastrow();
                  printf("\n\t\Veuillez Saisir votre choix:\t ");scanf("%d",&choix);
                 system("cls");
                switch(choix){
                case 1:{ AjouterFacture1();break;}
                case 2 :{afficherFactures1() ;break;}
                case 3 :{ModifierFacture1();break;}
                case 4 :{ValiderPaiement1();break;}
                case 5:{RechercherFacture1();break;}
                case 6:{SupprimerFacture1();break;}
                case 7:{afficherFacturesPayees1();break;}
                case 8:{menuB();break;}
                }

         }while(choix!=0);

    }


         }


          if(strcmp(QR,"C")==0||strcmp(QR,"c")==0){
                         do{
 printf("\n\n\n");

            printf("                      **                  BIENVENUE             **\n");
            firstrow();
            midtext(); printf(" 1---> Sign up                                                        %c             ",186);
            midrows();
           midtext();  printf(" 2---> Log in                                                         %c             ",186);
           midrows();
           midtext();  printf(" 3---> back to menu                                                        %c             ",186);
           lastrow();
            printf(" \n\t\tentre votre choix :\t ");
            scanf("%d",&choix);

            switch(choix){

            case 1:
                {
                printf("\nHello, we are delighted to have you among our new customers\n");
                printf("    To create an account, follow the required steps below:\n\n");
                SignUp1();break;}
            case 2:
                {
                tr1=Login21();
                if(tr1==1)
                    menu1();
                else
                    printf("\n\n-->>>Your ID or Passwordg incorrect !!!!! ");
                }
                case 3:{
					menuB();break;
				}
      }
      }while(choix!=0);

          }
}


#endif // NEWHEAD_H_INCLUDED
