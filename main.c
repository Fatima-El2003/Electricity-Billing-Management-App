#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "Header.h"
#include <ctype.h>
char langue[2],QR[3];
int op,tr,tr1;
int choix;
int Code;
char Mdp[23];
int i=0;
char ch;

int main()
{

    printf("\n\n");
    //printf("\t\t        ----------------------------------------------FACTURATION D'ELECTRICITE----------------------------------------------\n");
    printf("\t\tBIENVENU A VOTRE APPLICATION DE FACTURATION D'ELECTRICITE \n");
    printf("\n");
    do{
    firstrow();
    midtext();
    printf("\t\t\t  Veuillez Choisir votre langue:\n");
    midtext();
    printf("\t\t\t  1-Francais  \n");
    midtext();
    printf("\t\t\t  2-Anglais  \n \t\t\t    ");
    lastrow();
    printf("\n\t");
    scanf("%d",&choix);
    }while((choix!=1)&&choix!=2);
    system("cls");
    if(choix==1){
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

             }while(Code!=1212&&strcmp(Mdp,"minara")!=0);
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
                midtext(); printf("->2) Consulter la base des Clients.                                   %c            ",186);
                 midrows();
               midtext() ; printf("->3) Modifier Les informations d'un Client  .                         %c             ",186);
                 midrows();
               midtext();  printf("->4) Rechercher un Client .                                           %c             ",186);
                 midrows();
               midtext();  printf("->5)  Supprimer un Client .                                           %c             ",186);
               midrows();
               midtext() ;  printf("->6) Consulter les Adresses des Clients                               %c            ",186);
                midrows();
               midtext()  ;printf("->7) Consulter Les Ids et Les Mots de passe des Clients               %c             ",186);
               midrows();
              midtext();printf("->8) Retour au  Menu principale                                       %c                ",186);
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
           midtext();  printf(" 2---> Connexion                                                      %c             ",186);
           midrows();
           midtext();  printf(" 3---> Retour au menu                                                 %c             ",186);
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




// PARTIE ENGLISH

/////////////////////////////////////
////////////////////////////

if(choix==2){
        printf("\n\n\n");
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
               midtext(); printf("->1) Add Client                                                       %c     ",186);
                midrows();
               midtext(); printf("->2) Consult the Client Database                                      %c     ",186);
                 midrows();
               midtext() ;printf("->3) Modifier Les informations d'un Client                            %c     ",186);
                 midrows();
               midtext(); printf("->4) Search for a Client                                              %c     ",186);
                 midrows();
               midtext(); printf("->5) Delete a Client                                                  %c     ",186);
               midrows();
               midtext() ;printf("->6) Consult Client Addresses                                         %c     ",186);
                midrows();
               midtext() ;printf("->7) Consult Paying Clients Online Addresses                          %c     ",186);
               midrows();
              midtext();  printf("->8) back to menu                                                     %c     ",186);
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
               midtext();   printf("->1) Add Invoice                                                      %c             ",186);
               midrows();
                midtext();printf("->2) Consult the Invoices Database                                    %c             ",186);
                midrows();
               midtext(); printf("->3) Modify an Invoice                                                %c             ",186);
               midrows();
                midtext();printf("->4) Validate the payment of an Invoice                               %c             ",186);
                midrows();
                midtext();printf("->5) Search for an Invoice                                            %c             ",186);
                midrows();
            midtext();printf("->6) Delete an Invoice    .                                           %c             ",186);
            midrows();
         midtext();printf("->7) Consulter les Facture Payees                                     %c             ",186);
         midrows();
          midtext();printf("->8) back to menu                                                         %c             ",186);
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
return 0;
}
