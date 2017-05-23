#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

FILE *fp;
void meme(void);
int main()
{

    char str[1000],id[25],tid[25],rstr[40],substr[12];
    int i,j,k,x,flag,fish,t,font=1,r,emo,n,y,g,len,v,l,w,m;
    char ch;

   n=system("title KOLAVERI FB CHAT && mode 41,22 && color f0");

    if(n==-1)
    {
        printf("ERROR : Unable to access Windows command prompt\n");
        printf("------------------------------------------------------------------\n");
        printf("1.Check if Your Firewall is not blocking this application\n");
        printf("------------------------------------------------------------------\n");
        printf("2.You may require Administative privileges to run this application\n");
        printf("------------------------------------------------------------------\n");
        printf("3.Close all command prompt Windows and Restart the Application \n");
        printf("------------------------------------------------------------------\n");

        getch();
        exit(0);
    }


    for(k=1;k<=41;k++)
    {
        printf("+");
    }

    for(k=1;k<=10;k++){printf(" ");}
    printf("KOLAVERI FB CHAT - 2.0\n");
    for(k=1;k<=41;k++)
    {
        printf("+");
    }


    printf("\n       Developed by Archit Parnami \n");
    printf("   <--------------------------------->\n");
    printf("      www.facebook.com/KolAveryChat\n\n");
    printf("              INSTRUCTIONS\n\n");
    printf(" 1.Place your cursor in FB chat Window \n");
    printf("-----------------------------------------");
    printf(" 2.Then click on this window\n");
    printf("-----------------------------------------");
    printf(" 3.Enter your text\n");
    printf("-----------------------------------------");
    printf(" 4.Press enter when you are done\n");
    printf("-----------------------------------------");
    printf("\n   Press any key to continue....... ");
    getch();

    printf("\n                CONTROLS\n");
    printf("-----------------------------------------");
    printf(" 1.Font Styles -> Ctrl+Q/W/E/R/T \n");
    printf("-----------------------------------------");
    printf(" 2.Smilies     -> Ctrl+A/S/D/F/Z/X/C/V/B\n");
    printf("-----------------------------------------");
    printf(" 3.Chat Memes  -> Ctrl+Y\n");
    printf("-----------------------------------------");
    printf(" 4.Exit        -> Esc \n");
    printf("-----------------------------------------");
    printf(" 5.Resend Text -> Enter\n");
    printf("-----------------------------------------");
    printf(" 5.Colors      -> Right click on title  \n");
    printf("                  window > Properties \n");
    printf("-----------------------------------------");
    printf("   NOTE:\n");
    printf("   This software is  best viewed  with  \n");
    printf("  \"Consolas\" font.Check  properties. \n");
    printf("   Download link for it is provided in  \n");
    printf("   README File.\n\n");

    printf("   Thats it ! hit any key ...  ");
    getch();

    n=system("mode 41,4");

    if(n==-1)
    {
        printf("ERROR : Unable to access Windows command prompt\n");
        printf("------------------------------------------------------------------\n");
        printf("1.Check if Your Firewall is not blocking this application\n");
        printf("------------------------------------------------------------------\n");
        printf("2.You may require Administative privileges to run this application\n");
        printf("------------------------------------------------------------------\n");
        printf("3.Close all command prompt Windows and Restart the Application \n");
        printf("------------------------------------------------------------------\n");

        getch();
        exit(0);
    }



    printf(" ENTER TEXT: \n");


do
{
      i=0;fish=0;flag=0;t=0,emo=0;
      printf("\n ");

   do
     {
          r=0;
          fflush(stdin);
          ch=getch();
          switch(ch)
          {
            case 17:font=1;r=1;break;
            case 23:font=2;r=1;break;
            case 5: font=3;r=1;break;
            case 18:font=4;r=1;break;
            case 20:font=5;r=1;break;
            case 25:r=1;meme();
          }

      }while(r==1);

  while(ch!=13 && ch!=27)
  {
        emo=0;v=0;
          if(ch!=8)
          {
            if((i%39==0 && i>=39)&& i!=fish)

             {
                 if((ch!=32 && ch!=13) && (ch!=9))
                 {
                   g=i-1;
                   y=0;
                   while(str[g]!=32 && y<39)
                   {
                       if(str[g]==-125)
                       {
                           switch(str[g-1])
                           {
                               case 4:rstr[y]='(';rstr[y+1]=':';break;
                               case 6:rstr[y]='|';rstr[y+1]=':';break;
                               case 19:rstr[y]='D';rstr[y+1]=':';break;
                               case 22:rstr[y]='P';rstr[y+1]=':';break;
                               case 24:rstr[y]='O';rstr[y+1]=':';break;
                               case 26:rstr[y]='?';rstr[y+1]=':';break;
                           }
                          g-=2;
                          y+=2;
                       }

                       else
                       {
                           rstr[y]=str[g];
                           g--;
                           y++;
                       }
                   }

                 if(y<39)
                { rstr[y]='\0';
                  len=strlen(rstr);
                  for(y=0;y<len;y++)
                  printf("\b");
                  for(y=0;y<len;y++)
                  {str[g+y]=' ';
                   printf(" ");
                  }
                  str[g+y]=' ';
                  strcat(str,strrev(rstr));
                  printf("  %s",rstr);
                  t++;
                  fish=t*39;
                  flag=1;
                  i=i+len;
                }
             else
                 {

                     printf("  ");
                     t++;
                     flag=1;
                     fish=i;
                 }


            }


                 else if(ch!=9)
                 {
                     printf("  ");
                     t++;
                     fish=i;
                     flag=1;
                     v=1;
                 }
             }

        if(i%39==38)
           {
             switch(ch)
             {
                case 1:printf("   :)");emo=1;break;
                case 2:printf("   \\/");emo=1;break;
                case 3:printf("   <3");emo=1;break;
                case 4:printf("   :(");emo=1;break;
                case 6:printf("   :|");emo=1;break;
               case 19:printf("   :D");emo=1;break;
               case 22:printf("   :P");emo=1;break;
               case 24:printf("   :O");emo=1;break;
               case 26:printf("   :?");emo=1;break;
             }
             if(emo==1)
                {
                    str[i]=' ';
                    str[i+1]=ch;
                    str[i+2]=-125;
                    i+=3;
                    t++;
                    fish=t*39;
                    flag=1;
                    str[i]='\0';
                }

           }

        else
          {
            switch(ch)
             {
                case 1:printf(":)");emo=1;break;
                case 2:printf("\\/");emo=1;break;
                case 3:printf("<3");emo=1;break;
                case 4:printf(":(");emo=1;break;
                case 6:printf(":|");emo=1;break;
               case 19:printf(":D");emo=1;break;
               case 22:printf(":P");emo=1;break;
               case 24:printf(":O");emo=1;break;
               case 26:printf(":?");emo=1;break;
             }

            if(emo==1)
                {
                    str[i]=ch;
                    str[i+1]=-125;
                    i+=2;
                    str[i]='\0';
                }

          }


                if(emo!=1 && (ch!=-32 && ch!=9))
                 {
                     if((ch!=72 && ch!=75) && (ch!=77 &&ch!=80))
                      {
                         if(v!=1)
                         {printf("%c",ch);
                          str[i]=ch;
                          i++;
                          str[i]='\0';
                         }
                      }

                 }



          }



        if(ch==8)
        {

           if((i>0 && i<40)&&(flag!=1))
             {
                 printf("\b \b");
                 i--;
                 str[i]='\0';
             }

           else
               if(((i+t)%40)!=0)
               {
                  printf("\b \b");
                  i--;
                  str[i]='\0';
               }

         }




   do
    {
      r=0;
      fflush(stdin);
      ch=getch();
      switch(ch)
       {
           case 17:font=1;r=1;break;
           case 23:font=2;r=1;break;
           case 5: font=3;r=1;break;
           case 18:font=4;r=1;break;
           case 20:font=5;r=1;break;
           case 25:r=1;meme();
       }

    }while(r==1);


  }



  if(ch!=27)
  {
     fp=fopen("temp.txt","wt");

      if(fp==NULL)
      {

          printf("unable to open file!");
          getch();
          return 1;
      }
      len=strlen(str);
      strlwr(str);
      j=0;
      while(str[j]!='\0')
    {
      l=0;
      for(m=j; m<(j+11) && m<len;m++)
      {

              substr[l]=str[m];
              l++;

      }

      substr[l]='\0';
      w=-1;
      l=0;
      while(substr[l]!='\0')
      {
          if(substr[l]==' ')
          {
              w=l;

          }
        l++;
      }

      if(w>=1 && w<10)
      {
          if(l<=10)
          j=j+l;

          else
       {
           strncpy(substr,substr,w);
           substr[w]='\0';
           j=j+w+1;
        }
      }
      else if(w==10)
      {
          strncpy(substr,substr,10);
          substr[10]='\0';
          j=j+10+1;
      }

      else
      {
          if(l==11)
          {
              strncpy(substr,substr,10);
              substr[10]='\0';

              j=j+10;
          }

         else
         {
             j=j+l;
         }

      }

    for(l=0;substr[l]!='\0';l++)

   {
        x=1;

           if(font==2)
            {
              switch(substr[l])
             {
              case '0':strcpy(tid,"243811079025697");break;
              case '1':strcpy(tid,"243811165692355");break;
              case '2':strcpy(tid,"243811179025687");break;
              case '3':strcpy(tid,"243811199025685");break;
              case '4':strcpy(tid,"243811209025684");break;
              case '5':strcpy(tid,"243811225692349");break;
              case '6':strcpy(tid,"243811242359014");break;
              case '7':strcpy(tid,"243811255692346");break;
              case '8':strcpy(tid,"243811265692345");break;
              case '9':strcpy(tid,"243811275692344");break;
              case 'a':strcpy(tid,"243811285692343");break;
              case 'b':strcpy(tid,"243811292359009");break;
              case 'c':strcpy(tid,"243811302359008");break;
              case 'd':strcpy(tid,"243811315692340");break;
              case 'e':strcpy(tid,"243811322359006");break;
              case 'f':strcpy(tid,"243811329025672");break;
              case 'g':strcpy(tid,"243819429024862");break;
              case 'h':strcpy(tid,"243811342359004");break;
              case 'i':strcpy(tid,"243811362359002");break;
              case 'j':strcpy(tid,"243811369025668");break;
              case 'k':strcpy(tid,"243811385692333");break;
              case 'l':strcpy(tid,"243811395692332");break;
              case 'm':strcpy(tid,"243811412358997");break;
              case 'n':strcpy(tid,"243811419025663");break;
              case 'o':strcpy(tid,"243811432358995");break;
              case 'p':strcpy(tid,"243811442358994");break;
              case 'q':strcpy(tid,"243811449025660");break;
              case 'r':strcpy(tid,"243811459025659");break;
              case 's':strcpy(tid,"243811485692323");break;
              case 't':strcpy(tid,"243811509025654");break;
              case 'u':strcpy(tid,"243811522358986");break;
              case 'v':strcpy(tid,"243811529025652");break;
              case 'w':strcpy(tid,"243811535692318");break;
              case 'x':strcpy(tid,"243811552358983");break;
              case 'y':strcpy(tid,"243811559025649");break;
              case 'z':strcpy(tid,"243811565692315");break;
              case '#':strcpy(tid,"243810935692378");break;
              case '%':strcpy(tid,"243810955692376");break;
              case '&':strcpy(tid,"243810969025708");break;
              case '(':strcpy(tid,"243810985692373");break;
              case ')':strcpy(tid,"243811012359037");break;
              case '/':strcpy(tid,"243811019025703");break;
              case '.':strcpy(tid,"243811025692369");break;
              case '!':strcpy(tid,"243811155692356");break;
              case '*':strcpy(tid,"243811149025690");break;
              case '?':strcpy(tid,"243811139025691");break;
              case '@':strcpy(tid,"243811059025699");break;
              case '$':strcpy(tid,"243811099025695");break;
              case '+':strcpy(tid,"243811069025698");break;
              case '-':strcpy(tid,"243811052359033");break;
              case '^':strcpy(tid,"243811119025693");break;
              case '=':strcpy(tid,"243811045692367");break;
              case '_':strcpy(tid,"243811035692368");break;
             case '\\':strcpy(tid,"243811129025692");break;

                case 1:strcpy(tid,"243887922351346");break;
                case 2:strcpy(tid,"243888019018003");break;
                case 3:strcpy(tid,"243887979018007");break;
                case 4:strcpy(tid,"243887935684678");break;
                case 6:strcpy(tid,"243888012351337");break;
               case 19:strcpy(tid,"243887969018008");break;
               case 22:strcpy(tid,"243887959018009");break;
               case 24:strcpy(tid,"243887942351344");break;
               case 26:strcpy(tid,"243887992351339");break;
             case -125:x=-1;break;
              default :x=0;
            }

            }

          else if(font==1)
          {   switch(substr[l])
            {
              case '0':strcpy(tid,"243823882357750");break;
              case '1':strcpy(tid,"243823892357749");break;
              case '2':strcpy(tid,"243823902357748");break;
              case '3':strcpy(tid,"243823909024414");break;
              case '4':strcpy(tid,"243823935691078");break;
              case '5':strcpy(tid,"243823959024409");break;
              case '6':strcpy(tid,"243823979024407");break;
              case '7':strcpy(tid,"243824005691071");break;
              case '8':strcpy(tid,"243824049024400");break;
              case '9':strcpy(tid,"243824055691066");break;
              case '#':strcpy(tid,"243823392357799");break;
              case '%':strcpy(tid,"243824105691061");break;
              case '&':strcpy(tid,"243810969025708");break;
              case '(':strcpy(tid,"243810985692373");break;
              case ')':strcpy(tid,"243811012359037");break;
              case '/':strcpy(tid,"243823825691089");break;
              case '.':strcpy(tid,"243811025692369");break;
              case '!':strcpy(tid,"243823385691133");break;
              case '*':strcpy(tid,"243823859024419");break;
              case '?':strcpy(tid,"243824112357727");break;
              case '@':strcpy(tid,"243823369024468");break;
              case '$':strcpy(tid,"243823375691134");break;
              case '+':strcpy(tid,"243823872357751");break;
              case '-':strcpy(tid,"243823849024420");break;
              case '^':strcpy(tid,"243811119025693");break;
              case '=':strcpy(tid,"243823832357755");break;
              case '_':strcpy(tid,"243811035692368");break;
              case '\\':strcpy(tid,"243811129025692");break;
              case '>':strcpy(tid,"243823835691088");break;
              case '<':strcpy(tid,"243823845691087");break;


              case 'a':strcpy(tid,"243823399024465");break;
              case 'b':strcpy(tid,"243823429024462");break;
              case 'c':strcpy(tid,"243823459024459");break;
              case 'd':strcpy(tid,"243823482357790");break;
              case 'e':strcpy(tid,"243823499024455");break;
              case 'f':strcpy(tid,"243823509024454");break;
              case 'g':strcpy(tid,"243823529024452");break;
              case 'h':strcpy(tid,"243823545691117");break;
              case 'i':strcpy(tid,"243823555691116");break;
              case 'j':strcpy(tid,"243823565691115");break;
              case 'k':strcpy(tid,"243823585691113");break;
              case 'l':strcpy(tid,"243823592357779");break;
              case 'm':strcpy(tid,"243823609024444");break;
              case 'n':strcpy(tid,"243823639024441");break;
              case 'o':strcpy(tid,"243823655691106");break;
              case 'p':strcpy(tid,"243823665691105");break;
              case 'q':strcpy(tid,"243823672357771");break;
              case 'r':strcpy(tid,"243823685691103");break;
              case 's':strcpy(tid,"243823702357768");break;
              case 't':strcpy(tid,"243823722357766");break;
              case 'u':strcpy(tid,"243823749024430");break;
              case 'v':strcpy(tid,"243823759024429");break;
              case 'w':strcpy(tid,"243823779024427");break;
              case 'x':strcpy(tid,"243823799024425");break;
              case 'y':strcpy(tid,"243823805691091");break;
              case 'z':strcpy(tid,"243823812357757");break;

              case 1:strcpy(tid,"243887922351346");break;
              case 2:strcpy(tid,"243888019018003");break;
              case 3:strcpy(tid,"243887979018007");break;
              case 4:strcpy(tid,"243887935684678");break;
              case 6:strcpy(tid,"243888012351337");break;
              case 19:strcpy(tid,"243887969018008");break;
              case 22:strcpy(tid,"243887959018009");break;
              case 24:strcpy(tid,"243887942351344");break;
              case 26:strcpy(tid,"243887992351339");break;
              case -125:x=-1;break;
              default:x=0;
            }
          }

            else if(font==3)
             {
               switch(substr[l])

              {
              case 'a':strcpy(tid,"243844275689044");break;
              case 'b':strcpy(tid,"243844292355709");break;
              case 'c':strcpy(tid,"243844309022374");break;
              case 'd':strcpy(tid,"243844315689040");break;
              case 'e':strcpy(tid,"243844325689039");break;
              case 'f':strcpy(tid,"243844335689038");break;
              case 'g':strcpy(tid,"243844352355703");break;
              case 'h':strcpy(tid,"243844369022368");break;
              case 'i':strcpy(tid,"243844399022365");break;
              case 'j':strcpy(tid,"243844419022363");break;
              case 'k':strcpy(tid,"243844439022361");break;
              case 'l':strcpy(tid,"243844442355694");break;
              case 'm':strcpy(tid,"243844462355692");break;
              case 'n':strcpy(tid,"243844489022356");break;
              case 'o':strcpy(tid,"243844512355687");break;
              case 'p':strcpy(tid,"243844529022352");break;
              case 'q':strcpy(tid,"243844535689018");break;
              case 'r':strcpy(tid,"243844552355683");break;
              case 's':strcpy(tid,"243844579022347");break;
              case 't':strcpy(tid,"243844595689012");break;
              case 'u':strcpy(tid,"243844609022344");break;
              case 'v':strcpy(tid,"243844625689009");break;
              case 'w':strcpy(tid,"243844635689008");break;
              case 'x':strcpy(tid,"243844649022340");break;
              case 'y':strcpy(tid,"243844659022339");break;
              case 'z':strcpy(tid,"243844675689004");break;

               case '0':strcpy(tid,"243823882357750");break;
              case '1':strcpy(tid,"243823892357749");break;
              case '2':strcpy(tid,"243823902357748");break;
              case '3':strcpy(tid,"243823909024414");break;
              case '4':strcpy(tid,"243823935691078");break;
              case '5':strcpy(tid,"243823959024409");break;
              case '6':strcpy(tid,"243823979024407");break;
              case '7':strcpy(tid,"243824005691071");break;
              case '8':strcpy(tid,"243824049024400");break;
              case '9':strcpy(tid,"243824055691066");break;
              case '#':strcpy(tid,"243823392357799");break;
              case '%':strcpy(tid,"243824105691061");break;
              case '&':strcpy(tid,"243810969025708");break;
              case '(':strcpy(tid,"243810985692373");break;
              case ')':strcpy(tid,"243811012359037");break;
              case '/':strcpy(tid,"243823825691089");break;
              case '.':strcpy(tid,"243811025692369");break;
              case '!':strcpy(tid,"243823385691133");break;
              case '*':strcpy(tid,"243823859024419");break;
              case '?':strcpy(tid,"243824112357727");break;
              case '@':strcpy(tid,"243823369024468");break;
              case '$':strcpy(tid,"243823375691134");break;
              case '+':strcpy(tid,"243823872357751");break;
              case '-':strcpy(tid,"243823849024420");break;
              case '^':strcpy(tid,"243811119025693");break;
              case '=':strcpy(tid,"243823832357755");break;
              case '_':strcpy(tid,"243811035692368");break;
             case '\\':strcpy(tid,"243811129025692");break;
              case '>':strcpy(tid,"243823835691088");break;
              case '<':strcpy(tid,"243823845691087");break;

              case 1:strcpy(tid,"243887922351346");break;
              case 2:strcpy(tid,"243888019018003");break;
              case 3:strcpy(tid,"243887979018007");break;
              case 4:strcpy(tid,"243887935684678");break;
              case 6:strcpy(tid,"243888012351337");break;
             case 19:strcpy(tid,"243887969018008");break;
              case 22:strcpy(tid,"243887959018009");break;
              case 24:strcpy(tid,"243887942351344");break;
              case 26:strcpy(tid,"243887992351339");break;
              case -125:x=-125;break;
              default:x=0;
             }
           }


         else if(font==4)
         {
             switch(substr[l])
             {
              case 'a':strcpy(tid,"243853055688166");break;
              case 'b':strcpy(tid,"243853072354831");break;
              case 'c':strcpy(tid,"243853082354830");break;
              case 'd':strcpy(tid,"243853109021494");break;
              case 'e':strcpy(tid,"243853115688160");break;
              case 'f':strcpy(tid,"243853122354826");break;
              case 'g':strcpy(tid,"243853125688159");break;
              case 'h':strcpy(tid,"243853132354825");break;
              case 'i':strcpy(tid,"243853139021491");break;
              case 'j':strcpy(tid,"243853149021490");break;
              case 'k':strcpy(tid,"243853202354818");break;
              case 'l':strcpy(tid,"243853219021483");break;
              case 'm':strcpy(tid,"243853239021481");break;
              case 'n':strcpy(tid,"243853245688147");break;
              case 'o':strcpy(tid,"243853252354813");break;
              case 'p':strcpy(tid,"243853262354812");break;
              case 'q':strcpy(tid,"243853272354811");break;
              case 'r':strcpy(tid,"243853282354810");break;
              case 's':strcpy(tid,"243853285688143");break;
              case 't':strcpy(tid,"243853292354809");break;
              case 'u':strcpy(tid,"243853302354808");break;
              case 'v':strcpy(tid,"243853312354807");break;
              case 'w':strcpy(tid,"243853319021473");break;
              case 'x':strcpy(tid,"243853325688139");break;
              case 'y':strcpy(tid,"243853332354805");break;
              case 'z':strcpy(tid,"243853345688137");break;

              case '0':strcpy(tid,"243823882357750");break;
              case '1':strcpy(tid,"243823892357749");break;
              case '2':strcpy(tid,"243823902357748");break;
              case '3':strcpy(tid,"243823909024414");break;
              case '4':strcpy(tid,"243823935691078");break;
              case '5':strcpy(tid,"243823959024409");break;
              case '6':strcpy(tid,"243823979024407");break;
              case '7':strcpy(tid,"243824005691071");break;
              case '8':strcpy(tid,"243824049024400");break;
              case '9':strcpy(tid,"243824055691066");break;
              case '#':strcpy(tid,"243823392357799");break;
              case '%':strcpy(tid,"243824105691061");break;
              case '&':strcpy(tid,"243810969025708");break;
              case '(':strcpy(tid,"243810985692373");break;
              case ')':strcpy(tid,"243811012359037");break;
              case '/':strcpy(tid,"243823825691089");break;
              case '.':strcpy(tid,"243811025692369");break;
              case '!':strcpy(tid,"243823385691133");break;
              case '*':strcpy(tid,"243823859024419");break;
              case '?':strcpy(tid,"243824112357727");break;
              case '@':strcpy(tid,"243823369024468");break;
              case '$':strcpy(tid,"243823375691134");break;
              case '+':strcpy(tid,"243823872357751");break;
              case '-':strcpy(tid,"243823849024420");break;
              case '^':strcpy(tid,"243811119025693");break;
              case '=':strcpy(tid,"243823832357755");break;
              case '_':strcpy(tid,"243811035692368");break;
             case '\\':strcpy(tid,"243811129025692");break;
              case '>':strcpy(tid,"243823835691088");break;
              case '<':strcpy(tid,"243823845691087");break;

              case 1:strcpy(tid,"243887922351346");break;
              case 2:strcpy(tid,"243888019018003");break;
              case 3:strcpy(tid,"243887979018007");break;
              case 4:strcpy(tid,"243887935684678");break;
              case 6:strcpy(tid,"243888012351337");break;
             case 19:strcpy(tid,"243887969018008");break;
             case 22:strcpy(tid,"243887959018009");break;
             case 24:strcpy(tid,"243887942351344");break;
             case 26:strcpy(tid,"243887992351339");break;
             case -125:x=-1;break;
              default:x=0;

             }
         }

      else if(font==5)
          {
             switch(substr[l])
             {
              case 'a':strcpy(tid,"243855839021221");break;
              case 'b':strcpy(tid,"243855855687886");break;
              case 'c':strcpy(tid,"243855862354552");break;
              case 'd':strcpy(tid,"243855875687884");break;
              case 'e':strcpy(tid,"243855885687883");break;
              case 'f':strcpy(tid,"243855895687882");break;
              case 'g':strcpy(tid,"243855909021214");break;
              case 'h':strcpy(tid,"243855929021212");break;
              case 'i':strcpy(tid,"243855935687878");break;
              case 'j':strcpy(tid,"243855949021210");break;
              case 'k':strcpy(tid,"243855959021209");break;
              case 'l':strcpy(tid,"243855979021207");break;
              case 'm':strcpy(tid,"243855982354540");break;
              case 'n':strcpy(tid,"243855992354539");break;
              case 'o':strcpy(tid,"243856009021204");break;
              case 'p':strcpy(tid,"243856022354536");break;
              case 'q':strcpy(tid,"243856029021202");break;
              case 'r':strcpy(tid,"243856035687868");break;
              case 's':strcpy(tid,"243856045687867");break;
              case 't':strcpy(tid,"243856055687866");break;
              case 'u':strcpy(tid,"243856065687865");break;
              case 'v':strcpy(tid,"243856082354530");break;
              case 'w':strcpy(tid,"243856089021196");break;
              case 'x':strcpy(tid,"243856095687862");break;
              case 'y':strcpy(tid,"243856105687861");break;
              case 'z':strcpy(tid,"243856115687860");break;

              case '0':strcpy(tid,"243823882357750");break;
              case '1':strcpy(tid,"243823892357749");break;
              case '2':strcpy(tid,"243823902357748");break;
              case '3':strcpy(tid,"243823909024414");break;
              case '4':strcpy(tid,"243823935691078");break;
              case '5':strcpy(tid,"243823959024409");break;
              case '6':strcpy(tid,"243823979024407");break;
              case '7':strcpy(tid,"243824005691071");break;
              case '8':strcpy(tid,"243824049024400");break;
              case '9':strcpy(tid,"243824055691066");break;
              case '#':strcpy(tid,"243823392357799");break;
              case '%':strcpy(tid,"243824105691061");break;
              case '&':strcpy(tid,"243810969025708");break;
              case '(':strcpy(tid,"243810985692373");break;
              case ')':strcpy(tid,"243811012359037");break;
              case '/':strcpy(tid,"243823825691089");break;
              case '.':strcpy(tid,"243811025692369");break;
              case '!':strcpy(tid,"243823385691133");break;
              case '*':strcpy(tid,"243823859024419");break;
              case '?':strcpy(tid,"243824112357727");break;
              case '@':strcpy(tid,"243823369024468");break;
              case '$':strcpy(tid,"243823375691134");break;
              case '+':strcpy(tid,"243823872357751");break;
              case '-':strcpy(tid,"243823849024420");break;
              case '^':strcpy(tid,"243811119025693");break;
              case '=':strcpy(tid,"243823832357755");break;
              case '_':strcpy(tid,"243811035692368");break;
              case '\\':strcpy(tid,"243811129025692");break;
              case '>':strcpy(tid,"243823835691088");break;
              case '<':strcpy(tid,"243823845691087");break;

              case 1:strcpy(tid,"243887922351346");break;
              case 2:strcpy(tid,"243888019018003");break;
              case 3:strcpy(tid,"243887979018007");break;
              case 4:strcpy(tid,"243887935684678");break;
              case 6:strcpy(tid,"243888012351337");break;
              case 19:strcpy(tid,"243887969018008");break;
              case 22:strcpy(tid,"243887959018009");break;
              case 24:strcpy(tid,"243887942351344");break;
              case 26:strcpy(tid,"243887992351339");break;
              case -125:x=-1;break;
              default:x=0;

             }
         }


       if(x==1)
      {
       strcpy(id,"[[");
       strcat(id,tid);
       strcat(id,"]] ");
       fprintf(fp,"%s",id);
      }
      else if(x==0)
      {
          fputc(' ',fp);
         fputc(substr[l],fp);
         fputc(' ',fp);
      }


  }

  fprintf(fp,"\n");

  }

     fclose(fp);
     ShellExecute(GetDesktopWindow(),"open","opcatch.exe",NULL,NULL,SW_SHOWNORMAL);

 }



}while(ch!=27);

remove("temp.txt");
return 0;
}



void meme()
{
    int i;
    system("mode 116,16");
 while(1)
  {
    printf("====================================================================================================================");
    printf("                        <<------------------------FACEBOOK CHAT MEMES------------------------->>\n");
    printf("====================================================================================================================");
    printf(" 1.Are U kidding me    11.FFuuu                21.LOL                 31.Oh God Why?          41.True Story\n");
    printf(" 2.Aww Yeah            12.Forever Alone        22.Mask                32.Oh God!              42.U Gay Bro?\n");
    printf(" 3.Badass              13.Fuck Yeah            23.Me Gusta            33.OMG what is that     43.What You have done\n");
    printf(" 4.Bitch,please        14.Fuck You             24.Mother of God       34.Poker Face           44.Why U NO \n");
    printf(" 5.Challenge Accepted  15.Fuck No!             25.No!                 35.Problem?             45.Why U So Mad??\n");
    printf(" 6.Challenge Denied    16.GTFO                 26.Not Bad             36.That feels good man  46.Why\n");
    printf(" 7.Cutness Overflow    17.I lied               27.Nothing to do here  37.They c me trollin    47.WTF is Going On\n");
    printf(" 8.Death Stare         18.I c wat u did there  28.Now You See         38.Troll Dad            48.WTF\n");
    printf(" 9.Duck Yeah           19.I dont want to live  29.O Really?           39.Troll Drum           49.Why U No Sleep\n");
    printf("10.Fap Fap Fap         20.LMAO                 30.Oh Crap!            40.Troll Face           50.Why you Dont Say?\n");
    printf("====================================================================================================================");
    printf("Enter choice(1-50) or 0 to Exit : ");
    fflush(stdin);
    scanf("%d",&i);

    if(i==0)
    {
        system("mode 41,4");
        printf(" ENTER TEXT: \n ");
        return;
    }

    if(i>=1 && i<=50)
    {
        fp=fopen("temp.txt","wt");

        switch(i)
        {
             case 1:fprintf(fp,"[[213843935376101]][[213843965376098]][[213843988709429]][[213844012042760]][[213844048709423]][[213844075376087]][[213844105376084]]\n[[213844125376082]][[213844165376078]][[213844182042743]][[213844195376075]][[213844205376074]][[213844238709404]][[213844258709402]]\n[[213844295376065]][[213844312042730]][[213844332042728]][[213844365376058]][[213844405376054]][[213844425376052]][[213844438709384]]\n[[213844465376048]][[213844485376046]][[213844512042710]][[213844532042708]][[213844548709373]][[213844575376037]][[213844598709368]]\n[[213844628709365]][[213844648709363]][[213844675376027]][[213844695376025]][[213844712042690]][[213844732042688]][[213844775376017]]\n[[213844792042682]][[213844808709347]][[213844825376012]][[213844898709338]][[213844922042669]][[213844942042667]][[213844955375999]]\n[[213844975375997]][[213844992042662]][[213845008709327]][[213845048709323]][[213845082042653]][[213845105375984]][[213845122042649]]\n");break;
             case 2:fprintf(fp,"[[213854405375054]][[213854428708385]][[213854442041717]][[213854448708383]][[213854462041715]][[213854485375046]][[213854522041709]]\n[[213854552041706]][[213854565375038]][[213854575375037]][[213854592041702]][[213854598708368]][[213854625375032]][[213854638708364]]\n[[213854662041695]][[213854682041693]][[213854698708358]][[213854722041689]][[213854738708354]][[213854755375019]][[213854768708351]]\n[[213854788708349]][[213854805375014]][[213854842041677]][[213854868708341]][[213854885375006]][[213854908708337]][[213854932041668]]\n[[213854942041667]][[213854975374997]][[213854998708328]][[213855048708323]][[213855092041652]][[213855115374983]][[213855132041648]]\n[[213855145374980]][[213855165374978]][[213855208708307]][[213855228708305]][[213855245374970]][[213855268708301]][[213855302041631]]\n[[213855328708295]][[213855375374957]][[213855388708289]][[213855405374954]][[213855425374952]][[213855468708281]][[213855495374945]]\n");break;
             case 3:fprintf(fp,"[[214081188685709]][[214081208685707]][[214081255352369]][[214081282019033]][[214081295352365]][[214081315352363]][[214081332019028]]\n[[214081358685692]][[214081382019023]][[214081398685688]][[214081418685686]][[214081442019017]][[214081468685681]][[214081482019013]]\n[[214081528685675]][[214081555352339]][[214081565352338]][[214081588685669]][[214081628685665]][[214081645352330]][[214081668685661]]\n[[214081688685659]][[214081722018989]][[214081768685651]][[214081818685646]][[214081848685643]][[214081872018974]][[214081895352305]]\n[[214081922018969]][[214081942018967]][[214081995352295]][[214082032018958]][[214082058685622]][[214082082018953]][[214082118685616]]\n[[214082148685613]][[214082172018944]][[214082182018943]][[214082208685607]][[214082235352271]][[214082275352267]][[214082318685596]]\n[[214082345352260]][[214082362018925]][[214082392018922]][[214082412018920]][[214082438685584]][[214082465352248]][[214082512018910]]\n");break;
             case 4:fprintf(fp,"[[213936615366833]][[213936642033497]][[213936668700161]][[213936692033492]][[213936715366823]][[213936738700154]][[213936758700152]]\n[[213936772033484]][[213936792033482]][[213936812033480]][[213936838700144]][[213936868700141]][[213936902033471]][[213936958700132]]\n[[213937025366792]][[213937042033457]][[213937058700122]][[213937108700117]][[213937162033445]][[213937185366776]][[213937222033439]]\n[[213937295366765]][[213937348700093]][[213937368700091]][[213937402033421]][[213937428700085]][[213937455366749]][[213937512033410]]\n[[213937535366741]][[213937575366737]][[213937615366733]][[213937652033396]][[213937668700061]][[213937702033391]][[213937738700054]]\n[[213937762033385]][[213937778700050]][[213937798700048]][[213937822033379]][[213937842033377]][[213937872033374]][[213937905366704]]\n[[213937918700036]][[213937952033366]][[213937985366696]][[213938005366694]][[213938042033357]][[213938095366685]][[213938118700016]]\n");break;
             case 5:fprintf(fp,"[[213864372040724]][[213864388707389]][[213864405374054]][[213864428707385]][[213864452040716]][[213864465374048]][[213864478707380]]\n[[213864492040712]][[213864502040711]][[213864535374041]][[213864552040706]][[213864565374038]][[213864582040703]][[213864592040702]]\n[[213864608707367]][[213864628707365]][[213864658707362]][[213864692040692]][[213864715374023]][[213864742040687]][[213864748707353]]\n[[213864765374018]][[213864778707350]][[213864792040682]][[213864825374012]][[213864842040677]][[213864858707342]][[213864875374007]]\n[[213864898707338]][[213864912040670]][[213864922040669]][[213864942040667]][[213864958707332]][[213864975373997]][[213864982040663]]\n[[213864998707328]][[213865028707325]][[213865045373990]][[213865058707322]][[213865068707321]][[213865075373987]][[213865085373986]]\n[[213865102040651]][[213865115373983]][[213865142040647]][[213865155373979]][[213865175373977]][[213865188707309]][[213865198707308]]\n");break;
             case 6:fprintf(fp,"[[213870938706734]][[213870975373397]][[213870988706729]][[213871025373392]][[213871048706723]][[213871058706722]][[213871082040053]]\n[[213871112040050]][[213871162040045]][[213871192040042]][[213871215373373]][[213871235373371]][[213871268706701]][[213871305373364]]\n[[213871342040027]][[213871352040026]][[213871412040020]][[213871435373351]][[213871452040016]][[213871468706681]][[213871492040012]]\n[[213871515373343]][[213871535373341]][[213871558706672]][[213871575373337]][[213871602040001]][[213871618706666]][[213871655373329]]\n[[213871685373326]][[213871715373323]][[213871745373320]][[213871768706651]][[213871782039983]][[213871805373314]][[213871838706644]]\n[[213871862039975]][[213871875373307]][[213871885373306]][[213871902039971]][[213871935373301]][[213871955373299]][[213871975373297]]\n[[213871992039962]][[213872008706627]][[213872028706625]][[213872065373288]][[213872085373286]][[213872122039949]][[213872148706613]]\n");break;
             case 7:fprintf(fp,"[[213886172038544]][[213886245371870]][[213886295371865]][[213886378705190]][[213886435371851]][[213886485371846]][[213886552038506]]\n[[213886602038501]][[213886652038496]][[213886702038491]][[213886712038490]][[213886728705155]][[213886738705154]][[213886778705150]]\n[[213886792038482]][[213886838705144]][[213886855371809]][[213886865371808]][[213886875371807]][[213886885371806]][[213886915371803]]\n[[213886978705130]][[213887018705126]][[213887052038456]][[213887075371787]][[213887085371786]][[213887105371784]][[213887122038449]]\n[[213887142038447]][[213887165371778]][[213887178705110]][[213887208705107]][[213887222038439]][[213887245371770]][[213887262038435]]\n[[213887272038434]][[213887288705099]][[213887315371763]][[213887335371761]][[213887352038426]][[213887365371758]][[213887385371756]]\n[[213887392038422]][[213887405371754]][[213887422038419]][[213887428705085]][[213887448705083]][[213887478705080]][[213887505371744]]\n");break;
             case 8:fprintf(fp,"[[213981178695710]][[213981212029040]][[213981238695704]][[213981255362369]][[213981298695698]][[213981315362363]][[213981335362361]]\n[[213981372029024]][[213981388695689]][[213981412029020]][[213981462029015]][[213981478695680]][[213981492029012]][[213981515362343]]\n[[213981532029008]][[213981545362340]][[213981578695670]][[213981602029001]][[213981618695666]][[213981652028996]][[213981658695662]]\n[[213981682028993]][[213981715362323]][[213981745362320]][[213981775362317]][[213981792028982]][[213981805362314]][[213981825362312]]\n[[213981838695644]][[213981862028975]][[213981892028972]][[213981925362302]][[213981935362301]][[213981952028966]][[213981975362297]]\n[[213982008695627]][[213982042028957]][[213982075362287]][[213982085362286]][[213982088695619]][[213982108695617]][[213982128695615]]\n[[213982142028947]][[213982162028945]][[213982172028944]][[213982188695609]][[213982215362273]][[213982242028937]][[213982252028936]]\n");break;
             case 9:fprintf(fp,"[[213896832037478]][[213896852037476]][[213896872037474]][[213896892037472]][[213896918704136]][[213896932037468]][[213896942037467]]\n[[213896958704132]][[213896975370797]][[213896992037462]][[213897008704127]][[213897022037459]][[213897052037456]][[213897065370788]]\n[[213897095370785]][[213897115370783]][[213897125370782]][[213897142037447]][[213897148704113]][[213897172037444]][[213897185370776]]\n[[213897205370774]][[213897215370773]][[213897232037438]][[213897242037437]][[213897262037435]][[213897272037434]][[213897288704099]]\n[[213897308704097]][[213897328704095]][[213897345370760]][[213897355370759]][[213897365370758]][[213897375370757]][[213897385370756]]\n[[213897415370753]][[213897422037419]][[213897438704084]][[213897455370749]][[213897495370745]][[213897518704076]][[213897532037408]]\n[[213897552037406]][[213897568704071]][[213897602037401]][[213897625370732]][[213897672037394]][[213897698704058]][[213897718704056]]\n");break;
            case 10:fprintf(fp,"[[213902798703548]][[213902882036873]][[213902948703533]][[213902988703529]][[213903135370181]][[213903278703500]][[213903325370162]]\n[[213903362036825]][[213903402036821]][[213903432036818]][[213903485370146]][[213903542036807]][[213903575370137]][[213903615370133]]\n[[213903642036797]][[213903658703462]][[213903682036793]][[213903722036789]][[213903745370120]][[213903772036784]][[213903785370116]]\n[[213903808703447]][[213903848703443]][[213903872036774]][[213903892036772]][[213903908703437]][[213903935370101]][[213903958703432]]\n[[213903995370095]][[213904048703423]][[213904095370085]][[213904135370081]][[213904172036744]][[213904225370072]][[213904278703400]]\n[[213904315370063]][[213904328703395]][[213904355370059]][[213904382036723]][[213904392036722]][[213904405370054]][[213904428703385]]\n[[213904458703382]][[213904485370046]][[213904512036710]][[213904525370042]][[213904562036705]][[213904595370035]][[213904615370033]]\n");break;
            case 11:fprintf(fp,"[[213908175369677]][[213908205369674]][[213908235369671]][[213908252036336]][[213908265369668]][[213908295369665]][[213908318702996]]\n[[213908335369661]][[213908358702992]][[213908375369657]][[213908385369656]][[213908405369654]][[213908422036319]][[213908438702984]]\n[[213908465369648]][[213908485369646]][[213908498702978]][[213908525369642]][[213908568702971]][[213908582036303]][[213908612036300]]\n[[213908635369631]][[213908665369628]][[213908685369626]][[213908722036289]][[213908735369621]][[213908778702950]][[213908795369615]]\n[[213908812036280]][[213908835369611]][[213908862036275]][[213908902036271]][[213908935369601]][[213908958702932]][[213909005369594]]\n[[213909038702924]][[213909058702922]][[213909085369586]][[213909135369581]][[213909155369579]][[213909182036243]][[213909198702908]]\n[[213909222036239]][[213909242036237]][[213909262036235]][[213909302036231]][[213909332036228]][[213909362036225]][[213909385369556]]\n");break;
            case 12:fprintf(fp,"[[213914395369055]][[213914425369052]][[213914442035717]][[213914462035715]][[213914475369047]][[213914488702379]][[213914508702377]]\n[[213914535369041]][[213914555369039]][[213914565369038]][[213914582035703]][[213914605369034]][[213914618702366]][[213914642035697]]\n[[213914652035696]][[213914675369027]][[213914715369023]][[213914732035688]][[213914742035687]][[213914765369018]][[213914795369015]]\n[[213914818702346]][[213914842035677]][[213914865369008]][[213914878702340]][[213914908702337]][[213914928702335]][[213914948702333]]\n[[213914968702331]][[213914998702328]][[213915022035659]][[213915042035657]][[213915058702322]][[213915068702321]][[213915082035653]]\n[[213915102035651]][[213915122035649]][[213915138702314]][[213915155368979]][[213915172035644]][[213915192035642]][[213915208702307]]\n[[213915218702306]][[213915225368972]][[213915235368971]][[213915255368969]][[213915272035634]][[213915288702299]][[213915308702297]]\n");break;
            case 13:fprintf(fp,"[[213923948701433]][[213923965368098]][[213923998701428]][[213924015368093]][[213924032034758]][[213924058701422]][[213924065368088]]\n[[213924085368086]][[213924108701417]][[213924142034747]][[213924158701412]][[213924185368076]][[213924198701408]][[213924222034739]]\n[[213924238701404]][[213924255368069]][[213924272034734]][[213924295368065]][[213924312034730]][[213924328701395]][[213924338701394]]\n[[213924355368059]][[213924362034725]][[213924378701390]][[213924392034722]][[213924408701387]][[213924422034719]][[213924442034717]]\n[[213924465368048]][[213924488701379]][[213924522034709]][[213924558701372]][[213924572034704]][[213924582034703]][[213924602034701]]\n[[213924608701367]][[213924632034698]][[213924648701363]][[213924662034695]][[213924678701360]][[213924698701358]][[213924712034690]]\n[[213924735368021]][[213924762034685]][[213924805368014]][[213924902034671]][[213924918701336]][[213924932034668]][[213924952034666]]\n");break;
            case 14:fprintf(fp,"[[213926912034470]][[213926932034468]][[213926945367800]][[213926958701132]][[213926995367795]][[213927022034459]][[213927048701123]]\n[[213927058701122]][[213927082034453]][[213927125367782]][[213927138701114]][[213927152034446]][[213927178701110]][[213927205367774]]\n[[213927228701105]][[213927238701104]][[213927258701102]][[213927275367767]][[213927292034432]][[213927308701097]][[213927328701095]]\n[[213927338701094]][[213927352034426]][[213927368701091]][[213927405367754]][[213927422034419]][[213927428701085]][[213927458701082]]\n[[213927478701080]][[213927515367743]][[213927532034408]][[213927548701073]][[213927558701072]][[213927582034403]][[213927602034401]]\n[[213927618701066]][[213927662034395]][[213927695367725]][[213927708701057]][[213927722034389]][[213927752034386]][[213927778701050]]\n[[213927798701048]][[213927832034378]][[213927842034377]][[213927855367709]][[213927865367708]][[213927882034373]][[213927898701038]]\n");break;
            case 15:fprintf(fp,"[[213918275368667]][[213918315368663]][[213918318701996]][[213918335368661]][[213918348701993]][[213918368701991]][[213918372035324]]\n[[213918388701989]][[213918402035321]][[213918422035319]][[213918442035317]][[213918452035316]][[213918455368649]][[213918465368648]]\n[[213918478701980]][[213918482035313]][[213918498701978]][[213918532035308]][[213918575368637]][[213918595368635]][[213918602035301]]\n[[213918625368632]][[213918645368630]][[213918668701961]][[213918678701960]][[213918688701959]][[213918705368624]][[213918715368623]]\n[[213918728701955]][[213918742035287]][[213918752035286]][[213918765368618]][[213918775368617]][[213918778701950]][[213918812035280]]\n[[213918828701945]][[213918838701944]][[213918858701942]][[213918875368607]][[213918895368605]][[213918902035271]][[213918915368603]]\n[[213918932035268]][[213918935368601]][[213918948701933]][[213918958701932]][[213918972035264]][[213918992035262]][[213919012035260]]\n");break;
            case 16:fprintf(fp,"[[213930078700820]][[213930135367481]][[213930162034145]][[213930188700809]][[213930208700807]][[213930218700806]][[213930228700805]]\n[[213930238700804]][[213930252034136]][[213930285367466]][[213930302034131]][[213930322034129]][[213930355367459]][[213930368700791]]\n[[213930388700789]][[213930405367454]][[213930415367453]][[213930432034118]][[213930445367450]][[213930452034116]][[213930475367447]]\n[[213930492034112]][[213930545367440]][[213930568700771]][[213930602034101]][[213930628700765]][[213930658700762]][[213930702034091]]\n[[213930718700756]][[213930745367420]][[213930758700752]][[213930795367415]][[213930828700745]][[213930858700742]][[213930875367407]]\n[[213930888700739]][[213930902034071]][[213930922034069]][[213930935367401]][[213930955367399]][[213930975367397]][[213931002034061]]\n[[213931042034057]][[213931055367389]][[213931108700717]][[213931135367381]][[213931152034046]][[213931168700711]][[213931185367376]]\n");break;
            case 17:fprintf(fp,"[[213950912032070]][[213950965365398]][[213950995365395]][[213951025365392]][[213951048698723]][[213951072032054]][[213951085365386]]\n[[213951122032049]][[213951168698711]][[213951195365375]][[213951235365371]][[213951255365369]][[213951312032030]][[213951332032028]]\n[[213951352032026]][[213951372032024]][[213951392032022]][[213951428698685]][[213951455365349]][[213951482032013]][[213951492032012]]\n[[213951505365344]][[213951522032009]][[213951538698674]][[213951562032005]][[213951585365336]][[213951598698668]][[213951612032000]]\n[[213951632031998]][[213951645365330]][[213951655365329]][[213951672031994]][[213951682031993]][[213951705365324]][[213951728698655]]\n[[213951745365320]][[213951758698652]][[213951792031982]][[213951845365310]][[213951878698640]][[213951898698638]][[213951912031970]]\n[[213951942031967]][[213951968698631]][[213952002031961]][[213952022031959]][[213952038698624]][[213952058698622]][[213952078698620]]\n");break;
            case 18:fprintf(fp,"[[213952658698562]][[213952695365225]][[213952732031888]][[213952752031886]][[213952798698548]][[213952822031879]][[213952862031875]]\n[[213952895365205]][[213952915365203]][[213952952031866]][[213952995365195]][[213953022031859]][[213953052031856]][[213953075365187]]\n[[213953102031851]][[213953125365182]][[213953162031845]][[213953188698509]][[213953228698505]][[213953268698501]][[213953298698498]]\n[[213953335365161]][[213953372031824]][[213953402031821]][[213953422031819]][[213953448698483]][[213953475365147]][[213953498698478]]\n[[213953538698474]][[213953575365137]][[213953595365135]][[213953648698463]][[213953675365127]][[213953708698457]][[213953745365120]]\n[[213953782031783]][[213953812031780]][[213953858698442]][[213953895365105]][[213953922031769]][[213953955365099]][[213953975365097]]\n[[213953998698428]][[213954015365093]][[213954062031755]][[213954105365084]][[213954122031749]][[213954138698414]][[213954175365077]]\n");break;
            case 19:fprintf(fp,"[[213949228698905]][[213949245365570]][[213949268698901]][[213949288698899]][[213949298698898]][[213949312032230]][[213949328698895]]\n[[213949358698892]][[213949368698891]][[213949402032221]][[213949432032218]][[213949455365549]][[213949482032213]][[213949495365545]]\n[[213949535365541]][[213949545365540]][[213949582032203]][[213949608698867]][[213949622032199]][[213949642032197]][[213949658698862]]\n[[213949698698858]][[213949722032189]][[213949738698854]][[213949752032186]][[213949805365514]][[213949832032178]][[213949848698843]]\n[[213949905365504]][[213949935365501]][[213949955365499]][[213949982032163]][[213949998698828]][[213950012032160]][[213950035365491]]\n[[213950045365490]][[213950058698822]][[213950065365488]][[213950082032153]][[213950112032150]][[213950145365480]][[213950158698812]]\n[[213950182032143]][[213950192032142]][[213950208698807]][[213950235365471]][[213950258698802]][[213950282032133]][[213950308698797]]\n");break;
            case 20:fprintf(fp,"[[214122132014948]][[214122165348278]][[214122178681610]][[214122195348275]][[214122222014939]][[214122265348268]][[214122278681600]]\n[[214122308681597]][[214122342014927]][[214122382014923]][[214122418681586]][[214122448681583]][[214122472014914]][[214122498681578]]\n[[214122522014909]][[214122572014904]][[214122585348236]][[214122632014898]][[214122658681562]][[214122705348224]][[214122722014889]]\n[[214122748681553]][[214122758681552]][[214122775348217]][[214122798681548]][[214122822014879]][[214122845348210]][[214122872014874]]\n[[214122905348204]][[214122932014868]][[214122962014865]][[214122985348196]][[214122995348195]][[214123012014860]][[214123045348190]]\n[[214123065348188]][[214123095348185]][[214123132014848]][[214123172014844]][[214123198681508]][[214123218681506]][[214123238681504]]\n[[214123258681502]][[214123275348167]][[214123298681498]][[214123318681496]][[214123342014827]][[214123358681492]][[214123385348156]]\n");break;
            case 21:fprintf(fp,"[[213955072031654]][[213955108698317]][[213955175364977]][[213955192031642]][[213955228698305]][[213955258698302]][[213955302031631]]\n[[213955335364961]][[213955422031619]][[213955462031615]][[213955498698278]][[213955512031610]][[213955545364940]][[213955575364937]]\n[[213955605364934]][[213955635364931]][[213955662031595]][[213955692031592]][[213955755364919]][[213955778698250]][[213955802031581]]\n[[213955812031580]][[213955838698244]][[213955862031575]][[213955872031574]][[213955885364906]][[213955912031570]][[213955935364901]]\n[[213955952031566]][[213955985364896]][[213956025364892]][[213956042031557]][[213956082031553]][[213956095364885]][[213956112031550]]\n[[213956128698215]][[213956142031547]][[213956152031546]][[213956182031543]][[213956198698208]][[213956212031540]][[213956248698203]]\n[[213956278698200]][[213956298698198]][[213956315364863]][[213956335364861]][[213956358698192]][[213956382031523]][[213956405364854]]\n");break;
            case 22:fprintf(fp,"[[214123862014775]][[214123888681439]][[214123922014769]][[214123932014768]][[214123945348100]][[214123965348098]][[214123992014762]]\n[[214124032014758]][[214124082014753]][[214124105348084]][[214124125348082]][[214124158681412]][[214124172014744]][[214124202014741]]\n[[214124215348073]][[214124255348069]][[214124292014732]][[214124342014727]][[214124372014724]][[214124388681389]][[214124418681386]]\n[[214124438681384]][[214124488681379]][[214124545348040]][[214124572014704]][[214124598681368]][[214124632014698]][[214124652014696]]\n[[214124678681360]][[214124702014691]][[214124738681354]][[214124758681352]][[214124782014683]][[214124802014681]][[214124828681345]]\n[[214124865348008]][[214124908681337]][[214124922014669]][[214124985347996]][[214125038681324]][[214125055347989]][[214125088681319]]\n[[214125135347981]][[214125155347979]][[214125178681310]][[214125215347973]][[214125232014638]][[214125278681300]][[214125332014628]]\n");break;
            case 23:fprintf(fp,"[[213957042031457]][[213957108698117]][[213957145364780]][[213957195364775]][[213957212031440]][[213957262031435]][[213957302031431]]\n[[213957335364761]][[213957372031424]][[213957428698085]][[213957468698081]][[213957492031412]][[213957518698076]][[213957535364741]]\n[[213957565364738]][[213957605364734]][[213957618698066]][[213957648698063]][[213957678698060]][[213957715364723]][[213957735364721]]\n[[213957758698052]][[213957775364717]][[213957798698048]][[213957838698044]][[213957875364707]][[213957905364704]][[213957922031369]]\n[[213957932031368]][[213957978698030]][[213957992031362]][[213958018698026]][[213958038698024]][[213958052031356]][[213958072031354]]\n[[213958085364686]][[213958108698017]][[213958125364682]][[213958148698013]][[213958168698011]][[213958215364673]][[213958245364670]]\n[[213958262031335]][[213958295364665]][[213958312031330]][[213958332031328]][[213958398697988]][[213958435364651]][[213958448697983]]\n");break;
            case 24:fprintf(fp,"[[213959225364572]][[213959275364567]][[213959322031229]][[213959362031225]][[213959385364556]][[213959408697887]][[213959438697884]]\n[[213959475364547]][[213959492031212]][[213959518697876]][[213959558697872]][[213959572031204]][[213959665364528]][[213959685364526]]\n[[213959708697857]][[213959735364521]][[213959792031182]][[213959815364513]][[213959855364509]][[213959892031172]][[213959922031169]]\n[[213959942031167]][[213959972031164]][[213960005364494]][[213960018697826]][[213960062031155]][[213960095364485]][[213960128697815]]\n[[213960155364479]][[213960202031141]][[213960238697804]][[213960268697801]][[213960298697798]][[213960338697794]][[213960372031124]]\n[[213960415364453]][[213960438697784]][[213960458697782]][[213960475364447]][[213960488697779]][[213960502031111]][[213960528697775]]\n[[213960548697773]][[213960578697770]][[213960595364435]][[213960618697766]][[213960635364431]][[213960668697761]][[213960702031091]]\n");break;
            case 25:fprintf(fp,"[[213961138697714]][[213961168697711]][[213961202031041]][[213961232031038]][[213961262031035]][[213961278697700]][[213961312031030]]\n[[213961325364362]][[213961352031026]][[213961375364357]][[213961402031021]][[213961412031020]][[213961455364349]][[213961482031013]]\n[[213961508697677]][[213961532031008]][[213961555364339]][[213961585364336]][[213961595364335]][[213961628697665]][[213961662030995]]\n[[213961675364327]][[213961705364324]][[213961728697655]][[213961752030986]][[213961778697650]][[213961792030982]][[213961815364313]]\n[[213961832030978]][[213961862030975]][[213961872030974]][[213961885364306]][[213961938697634]][[213961975364297]][[213961988697629]]\n[[213962008697627]][[213962045364290]][[213962072030954]][[213962092030952]][[213962125364282]][[213962145364280]][[213962162030945]]\n[[213962188697609]][[213962222030939]][[213962238697604]][[213962245364270]][[213962255364269]][[213962285364266]][[213962332030928]]\n");break;
            case 26:fprintf(fp,"[[213963018697526]][[213963078697520]][[213963138697514]][[213963158697512]][[213963188697509]][[213963205364174]][[213963232030838]]\n[[213963245364170]][[213963265364168]][[213963292030832]][[213963305364164]][[213963318697496]][[213963342030827]][[213963362030825]]\n[[213963382030823]][[213963402030821]][[213963418697486]][[213963452030816]][[213963472030814]][[213963512030810]][[213963535364141]]\n[[213963572030804]][[213963595364135]][[213963635364131]][[213963675364127]][[213963702030791]][[213963732030788]][[213963758697452]]\n[[213963788697449]][[213963808697447]][[213963838697444]][[213963862030775]][[213963878697440]][[213963892030772]][[213963912030770]]\n[[213963948697433]][[213963972030764]][[213963992030762]][[213964025364092]][[213964035364091]][[213964068697421]][[213964088697419]]\n[[213964112030750]][[213964152030746]][[213964175364077]][[213964195364075]][[213964202030741]][[213964225364072]][[213964242030737]]\n");break;
            case 27:fprintf(fp,"[[213965035363991]][[213965085363986]][[213965105363984]][[213965138697314]][[213965175363977]][[213965222030639]][[213965265363968]]\n[[213965288697299]][[213965312030630]][[213965352030626]][[213965372030624]][[213965422030619]][[213965452030616]][[213965508697277]]\n[[213965525363942]][[213965582030603]][[213965615363933]][[213965655363929]][[213965688697259]][[213965732030588]][[213965742030587]]\n[[213965755363919]][[213965812030580]][[213965822030579]][[213965838697244]][[213965852030576]][[213965908697237]][[213965938697234]]\n[[213965965363898]][[213965985363896]][[213966025363892]][[213966055363889]][[213966072030554]][[213966092030552]][[213966105363884]]\n[[213966132030548]][[213966162030545]][[213966205363874]][[213966218697206]][[213966252030536]][[213966272030534]][[213966328697195]]\n[[213966355363859]][[213966382030523]][[213966402030521]][[213966428697185]][[213966452030516]][[213966468697181]][[213966505363844]]\n");break;
            case 28:fprintf(fp,"[[213966912030470]][[213966935363801]][[213966952030466]][[213966978697130]][[213967005363794]][[213967025363792]][[213967068697121]]\n[[213967115363783]][[213967152030446]][[213967205363774]][[213967215363773]][[213967255363769]][[213967335363761]][[213967358697092]]\n[[213967392030422]][[213967415363753]][[213967428697085]][[213967475363747]][[213967512030410]][[213967522030409]][[213967552030406]]\n[[213967578697070]][[213967592030402]][[213967622030399]][[213967652030396]][[213967675363727]][[213967695363725]][[213967718697056]]\n[[213967755363719]][[213967808697047]][[213967828697045]][[213967865363708]][[213967912030370]][[213967932030368]][[213967952030366]]\n[[213967972030364]][[213967998697028]][[213968015363693]][[213968038697024]][[213968058697022]][[213968085363686]][[213968095363685]]\n[[213968118697016]][[213968142030347]][[213968162030345]][[213968182030343]][[213968222030339]][[213968242030337]][[213968282030333]]\n");break;
            case 29:fprintf(fp,"[[213968792030282]][[213968818696946]][[213968858696942]][[213968885363606]][[213968918696936]][[213968942030267]][[213968968696931]]\n[[213969002030261]][[213969018696926]][[213969045363590]][[213969072030254]][[213969088696919]][[213969108696917]][[213969128696915]]\n[[213969148696913]][[213969165363578]][[213969215363573]][[213969342030227]][[213969372030224]][[213969395363555]][[213969438696884]]\n[[213969472030214]][[213969495363545]][[213969535363541]][[213969542030207]][[213969595363535]][[213969632030198]][[213969658696862]]\n[[213969688696859]][[213969712030190]][[213969732030188]][[213969755363519]][[213969795363515]][[213969818696846]][[213969828696845]]\n[[213969865363508]][[213969888696839]][[213969912030170]][[213969928696835]][[213969952030166]][[213969985363496]][[213970018696826]]\n[[213970042030157]][[213970068696821]][[213970098696818]][[213970122030149]][[213970138696814]][[213970158696812]][[213970188696809]]\n");break;
            case 30:fprintf(fp,"[[213947502032411]][[213947518699076]][[213947535365741]][[213947578699070]][[213947588699069]][[213947635365731]][[213947655365729]]\n[[213947685365726]][[213947695365725]][[213947715365723]][[213947732032388]][[213947762032385]][[213947775365717]][[213947812032380]]\n[[213947835365711]][[213947855365709]][[213947878699040]][[213947902032371]][[213947942032367]][[213947965365698]][[213948002032361]]\n[[213948042032357]][[213948055365689]][[213948088699019]][[213948122032349]][[213948135365681]][[213948175365677]][[213948198699008]]\n[[213948225365672]][[213948255365669]][[213948282032333]][[213948295365665]][[213948328698995]][[213948358698992]][[213948378698990]]\n[[213948402032321]][[213948425365652]][[213948455365649]][[213948482032313]][[213948505365644]][[213948528698975]][[213948545365640]]\n[[213948595365635]][[213948635365631]][[213948675365627]][[213948688698959]][[213948742032287]][[213948762032285]][[213948795365615]]\n");break;
            case 31:fprintf(fp,"[[213973852029776]][[213973995363095]][[213974115363083]][[213974172029744]][[213974225363072]][[213974275363067]][[213974342029727]]\n[[213974415363053]][[213974508696377]][[213974598696368]][[213974645363030]][[213974705363024]][[213974795363015]][[213974875363007]]\n[[213974942029667]][[213975022029659]][[213975082029653]][[213975112029650]][[213975152029646]][[213975192029642]][[213975288696299]]\n[[213975335362961]][[213975418696286]][[213975472029614]][[213975525362942]][[213975602029601]][[213975635362931]][[213975662029595]]\n[[213975708696257]][[213975752029586]][[213975778696250]][[213975798696248]][[213975888696239]][[213975958696232]][[213976008696227]]\n[[213976052029556]][[213976085362886]][[213976132029548]][[213976212029540]][[213976265362868]][[213976278696200]][[213976305362864]]\n[[213976342029527]][[213976365362858]][[213976392029522]][[213976438696184]][[213976468696181]][[213976512029510]][[213976538696174]]\n");break;
            case 32:fprintf(fp,"[[213970752030086]][[213970788696749]][[213970815363413]][[213970835363411]][[213970865363408]][[213970872030074]][[213970882030073]]\n[[213970902030071]][[213970918696736]][[213970935363401]][[213970962030065]][[213970965363398]][[213970995363395]][[213971015363393]]\n[[213971035363391]][[213971055363389]][[213971112030050]][[213971128696715]][[213971135363381]][[213971155363379]][[213971175363377]]\n[[213971198696708]][[213971218696706]][[213971232030038]][[213971262030035]][[213971278696700]][[213971292030032]][[213971308696697]]\n[[213971312030030]][[213971325363362]][[213971342030027]][[213971352030026]][[213971372030024]][[213971388696689]][[213971415363353]]\n[[213971425363352]][[213971438696684]][[213971458696682]][[213971508696677]][[213971538696674]][[213971548696673]][[213971578696670]]\n[[213971595363335]][[213971628696665]][[213971668696661]][[213971705363324]][[213971742029987]][[213971768696651]][[213971788696649]]\n");break;
            case 33:fprintf(fp,"[[213978015362693]][[213978048696023]][[213978078696020]][[213978125362682]][[213978172029344]][[213978198696008]][[213978222029339]]\n[[213978258696002]][[213978282029333]][[213978312029330]][[213978355362659]][[213978385362656]][[213978425362652]][[213978455362649]]\n[[213978502029311]][[213978545362640]][[213978592029302]][[213978615362633]][[213978655362629]][[213978705362624]][[213978748695953]]\n[[213978792029282]][[213978845362610]][[213978878695940]][[213978915362603]][[213978935362601]][[213978975362597]][[213979008695927]]\n[[213979042029257]][[213979075362587]][[213979112029250]][[213979142029247]][[213979168695911]][[213979195362575]][[213979235362571]]\n[[213979265362568]][[213979298695898]][[213979348695893]][[213979358695892]][[213979375362557]][[213979428695885]][[213979465362548]]\n[[213979488695879]][[213979508695877]][[213979535362541]][[213979565362538]][[213980362029125]][[213980378695790]][[213980448695783]]\n");break;
            case 34:fprintf(fp,"[[214125902014571]][[214125948681233]][[214125962014565]][[214125985347896]][[214126008681227]][[214126032014558]][[214126062014555]]\n[[214126092014552]][[214126108681217]][[214126128681215]][[214126165347878]][[214126192014542]][[214126208681207]][[214126228681205]]\n[[214126258681202]][[214126282014533]][[214126312014530]][[214126352014526]][[214126375347857]][[214126398681188]][[214126432014518]]\n[[214126452014516]][[214126495347845]][[214126515347843]][[214126542014507]][[214126578681170]][[214126598681168]][[214126605347834]]\n[[214126625347832]][[214126645347830]][[214126655347829]][[214126675347827]][[214126712014490]][[214126755347819]][[214126778681150]]\n[[214126822014479]][[214126848681143]][[214126878681140]][[214126895347805]][[214126908681137]][[214126948681133]][[214127005347794]]\n[[214127045347790]][[214127072014454]][[214127092014452]][[214127115347783]][[214127138681114]][[214127172014444]][[214127195347775]]\n");break;
            case 35:fprintf(fp,"[[214128755347619]][[214128782014283]][[214128805347614]][[214128848680943]][[214128878680940]][[214128908680937]][[214128928680935]]\n[[214128955347599]][[214128988680929]][[214129025347592]][[214129038680924]][[214129052014256]][[214129078680920]][[214129112014250]]\n[[214129132014248]][[214129162014245]][[214129212014240]][[214129242014237]][[214129272014234]][[214129305347564]][[214129322014229]]\n[[214129342014227]][[214129398680888]][[214129418680886]][[214129448680883]][[214129495347545]][[214129522014209]][[214129528680875]]\n[[214129548680873]][[214129572014204]][[214129612014200]][[214129645347530]][[214129668680861]][[214129692014192]][[214129735347521]]\n[[214129762014185]][[214129795347515]][[214129828680845]][[214129838680844]][[214129868680841]][[214129895347505]][[214129942014167]]\n[[214129958680832]][[214129978680830]][[214129995347495]][[214130025347492]][[214130042014157]][[214130058680822]][[214130078680820]]\n");break;
            case 36:fprintf(fp,"[[213982745362220]][[213982762028885]][[213982825362212]][[213982855362209]][[213982888695539]][[213982908695537]][[213982932028868]]\n[[213982952028866]][[213982965362198]][[213982982028863]][[213983008695527]][[213983062028855]][[213983108695517]][[213983128695515]]\n[[213983152028846]][[213983172028844]][[213983198695508]][[213983208695507]][[213983232028838]][[213983258695502]][[213983272028834]]\n[[213983292028832]][[213983318695496]][[213983362028825]][[213983375362157]][[213983422028819]][[213983452028816]][[213983525362142]]\n[[213983542028807]][[213983568695471]][[213983588695469]][[213983612028800]][[213983625362132]][[213983642028797]][[213983668695461]]\n[[213983685362126]][[213983718695456]][[213983752028786]][[213983782028783]][[213983822028779]][[213983855362109]][[213983865362108]]\n[[213983895362105]][[213983918695436]][[213983935362101]][[213983955362099]][[213983978695430]][[213984002028761]][[213984018695426]]\n");break;
            case 37:fprintf(fp,"[[213984825362012]][[213984885362006]][[213984902028671]][[213984912028670]][[213984928695335]][[213984945362000]][[213984968695331]]\n[[213985005361994]][[213985025361992]][[213985062028655]][[213985102028651]][[213985132028648]][[213985152028646]][[213985158695312]]\n[[213985188695309]][[213985212028640]][[213985238695304]][[213985265361968]][[213985282028633]][[213985332028628]][[213985358695292]]\n[[213985398695288]][[213985422028619]][[213985435361951]][[213985465361948]][[213985475361947]][[213985498695278]][[213985522028609]]\n[[213985548695273]][[213985572028604]][[213985598695268]][[213985618695266]][[213985642028597]][[213985672028594]][[213985692028592]]\n[[213985698695258]][[213985715361923]][[213985742028587]][[213985762028585]][[213985772028584]][[213985808695247]][[213985822028579]]\n[[213985892028572]][[213985932028568]][[213985942028567]][[213985978695230]][[213986018695226]][[213986055361889]][[213986095361885]]\n");break;
            case 38:fprintf(fp,"[[213833805377114]][[213833852043776]][[213833882043773]][[213833898710438]][[213833928710435]][[213833938710434]][[213833958710432]]\n[[213833978710430]][[213833998710428]][[213834008710427]][[213834028710425]][[213834058710422]][[213834075377087]][[213834082043753]]\n[[213834088710419]][[213834125377082]][[213834158710412]][[213834208710407]][[213834258710402]][[213834272043734]][[213834288710399]]\n[[213834325377062]][[213834335377061]][[213834355377059]][[213834385377056]][[213834398710388]][[213834418710386]][[213834458710382]]\n[[213834492043712]][[213834518710376]][[213834548710373]][[213834578710370]][[213834598710368]][[213834608710367]][[213834615377033]]\n[[213834632043698]][[213834648710363]][[213834658710362]][[213834682043693]][[213834692043692]][[213834708710357]][[213834732043688]]\n[[213834755377019]][[213834785377016]][[213834812043680]][[213834832043678]][[213834852043676]][[213834868710341]][[213834912043670]]\n");break;
            case 39:fprintf(fp,"[[213793278714500]][[213793302047831]][[213793345381160]][[213793368714491]][[213793382047823]][[213793392047822]][[213793412047820]]\n[[213793428714485]][[213793455381149]][[213793485381146]][[213793508714477]][[213793542047807]][[213793558714472]][[213793578714470]]\n[[213793598714468]][[213793622047799]][[213793652047796]][[213793672047794]][[213793685381126]][[213793725381122]][[213793745381120]]\n[[213793762047785]][[213793778714450]][[213793795381115]][[213793808714447]][[213793835381111]][[213793852047776]][[213793868714441]]\n[[213793885381106]][[213793912047770]][[213793938714434]][[213793962047765]][[213793985381096]][[213794002047761]][[213794025381092]]\n[[213794045381090]][[213794062047755]][[213794075381087]][[213794088714419]][[213794105381084]][[213794122047749]][[213794155381079]]\n[[213794165381078]][[213794175381077]][[213794192047742]][[213794205381074]][[213794225381072]][[213794232047738]][[213794248714403]]\n");break;
            case 40:fprintf(fp,"[[213986585361836]][[213986608695167]][[213986675361827]][[213986715361823]][[213986745361820]][[213986765361818]][[213986805361814]]\n[[213986852028476]][[213986865361808]][[213986898695138]][[213986932028468]][[213986968695131]][[213986975361797]][[213987022028459]]\n[[213987055361789]][[213987092028452]][[213987152028446]][[213987198695108]][[213987228695105]][[213987275361767]][[213987322028429]]\n[[213987348695093]][[213987382028423]][[213987412028420]][[213987448695083]][[213987478695080]][[213987525361742]][[213987615361733]]\n[[213987702028391]][[213987722028389]][[213987755361719]][[213987788695049]][[213987822028379]][[213987848695043]][[213987882028373]]\n[[213987918695036]][[213987995361695]][[213988068695021]][[213988118695016]][[213988185361676]][[213988365361658]][[213988408694987]]\n[[213988435361651]][[213988475361647]][[213988502028311]][[213988562028305]][[213988618694966]][[213988678694960]][[213988792028282]]\n");break;
            case 41:fprintf(fp,"[[213991595361335]][[213991615361333]][[213991638694664]][[213991658694662]][[213991688694659]][[213991712027990]][[213991732027988]]\n[[213991758694652]][[213991785361316]][[213991808694647]][[213991828694645]][[213991855361309]][[213991892027972]][[213991935361301]]\n[[213991982027963]][[213992025361292]][[213992105361284]][[213992168694611]][[213992235361271]][[213992252027936]][[213992285361266]]\n[[213992325361262]][[213992355361259]][[213992368694591]][[213992385361256]][[213992418694586]][[213992448694583]][[213992465361248]]\n[[213992505361244]][[213992535361241]][[213992582027903]][[213992608694567]][[213992625361232]][[213992652027896]][[213992675361227]]\n[[213992695361225]][[213992722027889]][[213992738694554]][[213992755361219]][[213992775361217]][[213992802027881]][[213992828694545]]\n[[213992855361209]][[213992878694540]][[213992918694536]][[213992948694533]][[213992972027864]][[213992998694528]][[213993032027858]]\n");break;
            case 42:fprintf(fp,"[[214130635347431]][[214130662014095]][[214130685347426]][[214130698680758]][[214130722014089]][[214130742014087]][[214130762014085]]\n[[214130792014082]][[214130815347413]][[214130855347409]][[214130882014073]][[214130905347404]][[214130925347402]][[214130938680734]]\n[[214130958680732]][[214130968680731]][[214130998680728]][[214131015347393]][[214131052014056]][[214131092014052]][[214131112014050]]\n[[214131128680715]][[214131162014045]][[214131202014041]][[214131212014040]][[214131228680705]][[214131245347370]][[214131272014034]]\n[[214131305347364]][[214131325347362]][[214131342014027]][[214131352014026]][[214131372014024]][[214131398680688]][[214131422014019]]\n[[214131428680685]][[214131448680683]][[214131472014014]][[214131492014012]][[214131515347343]][[214131535347341]][[214131572014004]]\n[[214131595347335]][[214131622013999]][[214131665347328]][[214131682013993]][[214131695347325]][[214131718680656]][[214131748680653]]\n");break;
            case 43:fprintf(fp,"[[213993865361108]][[213993892027772]][[213993918694436]][[213993958694432]][[213994018694426]][[213994028694425]][[213994052027756]]\n[[213994075361087]][[213994112027750]][[213994145361080]][[213994162027745]][[213994185361076]][[213994215361073]][[213994235361071]]\n[[213994268694401]][[213994288694399]][[213994328694395]][[213994348694393]][[213994368694391]][[213994402027721]][[213994422027719]]\n[[213994462027715]][[213994498694378]][[213994525361042]][[213994572027704]][[213994612027700]][[213994655361029]][[213994688694359]]\n[[213994768694351]][[213994832027678]][[213994848694343]][[213994878694340]][[213994932027668]][[213994955360999]][[213994975360997]]\n[[213995018694326]][[213995042027657]][[213995058694322]][[213995075360987]][[213995118694316]][[213995155360979]][[213995165360978]]\n[[213995182027643]][[213995192027642]][[213995232027638]][[213995245360970]][[213995258694302]][[213995275360967]][[213995315360963]]\n");break;
            case 44:fprintf(fp,"[[214004942026667]][[214004958693332]][[214004975359997]][[214005005359994]][[214005025359992]][[214005042026657]][[214005065359988]]\n[[214005082026653]][[214005145359980]][[214005188693309]][[214005232026638]][[214005262026635]][[214005282026633]][[214005298693298]]\n[[214005335359961]][[214005352026626]][[214005372026624]][[214005415359953]][[214005435359951]][[214005458693282]][[214005488693279]]\n[[214005512026610]][[214005535359941]][[214005548693273]][[214005565359938]][[214005592026602]][[214005612026600]][[214005635359931]]\n[[214005665359928]][[214005685359926]][[214005705359924]][[214005732026588]][[214005778693250]][[214005795359915]][[214005818693246]]\n[[214005838693244]][[214005878693240]][[214005925359902]][[214005942026567]][[214005972026564]][[214005995359895]][[214006025359892]]\n[[214006048693223]][[214006065359888]][[214006085359886]][[214006098693218]][[214006115359883]][[214006138693214]][[214006182026543]]\n");break;
            case 45:fprintf(fp,"[[214137215346773]][[214137232013438]][[214137252013436]][[214137268680101]][[214137285346766]][[214137312013430]][[214137335346761]]\n[[214137368680091]][[214137378680090]][[214137412013420]][[214137448680083]][[214137475346747]][[214137488680079]][[214137505346744]]\n[[214137525346742]][[214137538680074]][[214137552013406]][[214137572013404]][[214137588680069]][[214137602013401]][[214137625346732]]\n[[214137645346730]][[214137685346726]][[214137722013389]][[214137738680054]][[214137768680051]][[214137882013373]][[214137915346703]]\n[[214137928680035]][[214137945346700]][[214137965346698]][[214138002013361]][[214138012013360]][[214138028680025]][[214138062013355]]\n[[214138085346686]][[214138105346684]][[214138138680014]][[214138178680010]][[214138205346674]][[214138245346670]][[214138275346667]]\n[[214138298679998]][[214138328679995]][[214138358679992]][[214138372013324]][[214138405346654]][[214138432013318]][[214138455346649]]\n");break;
            case 46:fprintf(fp,"[[214002688693559]][[214002722026889]][[214002775360217]][[214002812026880]][[214002835360211]][[214002868693541]][[214002905360204]]\n[[214002925360202]][[214002945360200]][[214002972026864]][[214003022026859]][[214003055360189]][[214003085360186]][[214003125360182]]\n[[214003178693510]][[214003208693507]][[214003252026836]][[214003272026834]][[214003305360164]][[214003338693494]][[214003375360157]]\n[[214003395360155]][[214003438693484]][[214003468693481]][[214003488693479]][[214003508693477]][[214003528693475]][[214003562026805]]\n[[214003585360136]][[214003608693467]][[214003642026797]][[214003672026794]][[214003685360126]][[214003705360124]][[214003752026786]]\n[[214003775360117]][[214003792026782]][[214003825360112]][[214003858693442]][[214003898693438]][[214003935360101]][[214004002026761]]\n[[214004078693420]][[214004112026750]][[214004148693413]][[214004192026742]][[214004222026739]][[214004242026737]][[214004295360065]]\n");break;
            case 47:fprintf(fp,"[[214135572013604]][[214135598680268]][[214135628680265]][[214135645346930]][[214135665346928]][[214135685346926]][[214135702013591]]\n[[214135718680256]][[214135735346921]][[214135748680253]][[214135762013585]][[214135802013581]][[214135835346911]][[214135845346910]]\n[[214135862013575]][[214135875346907]][[214135885346906]][[214135908680237]][[214135932013568]][[214135965346898]][[214135985346896]]\n[[214136005346894]][[214136048680223]][[214136085346886]][[214136118680216]][[214136148680213]][[214136168680211]][[214136182013543]]\n[[214136202013541]][[214136232013538]][[214136258680202]][[214136278680200]][[214136288680199]][[214136312013530]][[214136368680191]]\n[[214136385346856]][[214136392013522]][[214136412013520]][[214136438680184]][[214136448680183]][[214136465346848]][[214136505346844]]\n[[214136522013509]][[214136558680172]][[214136572013504]][[214136602013501]][[214136622013499]][[214136658680162]][[214136685346826]]\n");break;
            case 48:fprintf(fp,"[[214132398680588]][[214132438680584]][[214132465347248]][[214132485347246]][[214132502013911]][[214132512013910]][[214132525347242]]\n[[214132532013908]][[214132562013905]][[214132582013903]][[214132605347234]][[214132622013899]][[214132645347230]][[214132672013894]]\n[[214132688680559]][[214132712013890]][[214132735347221]][[214132755347219]][[214132765347218]][[214132795347215]][[214132835347211]]\n[[214132858680542]][[214132875347207]][[214132895347205]][[214132908680537]][[214132925347202]][[214132952013866]][[214132985347196]]\n[[214133015347193]][[214133028680525]][[214133055347189]][[214133075347187]][[214133102013851]][[214133125347182]][[214133165347178]]\n[[214133195347175]][[214133225347172]][[214133245347170]][[214133268680501]][[214133292013832]][[214133315347163]][[214133332013828]]\n[[214133348680493]][[214133358680492]][[214133375347157]][[214133382013823]][[214133388680489]][[214133398680488]][[214133428680485]]\n");break;
            case 49:fprintf(fp,"[[214133955347099]][[214133972013764]][[214133988680429]][[214134005347094]][[214134028680425]][[214134045347090]][[214134062013755]]\n[[214134088680419]][[214134122013749]][[214134138680414]][[214134162013745]][[214134195347075]][[214134222013739]][[214134242013737]]\n[[214134258680402]][[214134292013732]][[214134315347063]][[214134332013728]][[214134352013726]][[214134372013724]][[214134388680389]]\n[[214134418680386]][[214134432013718]][[214134462013715]][[214134505347044]][[214134535347041]][[214134552013706]][[214134562013705]]\n[[214134572013704]][[214134602013701]][[214134628680365]][[214134645347030]][[214134668680361]][[214134688680359]][[214134722013689]]\n[[214134752013686]][[214134778680350]][[214134805347014]][[214134828680345]][[214134862013675]][[214134878680340]][[214134895347005]]\n[[214134922013669]][[214134952013666]][[214134968680331]][[214134978680330]][[214135002013661]][[214135025346992]][[214135058680322]]\n");break;
            case 50:fprintf(fp,"[[214007695359725]][[214007728693055]][[214007752026386]][[214007778693050]][[214007802026381]][[214007828693045]][[214007885359706]]\n[[214007918693036]][[214007955359699]][[214007975359697]][[214007982026363]][[214008015359693]][[214008048693023]][[214008068693021]]\n[[214008085359686]][[214008092026352]][[214008115359683]][[214008135359681]][[214008152026346]][[214008168693011]][[214008192026342]]\n[[214008212026340]][[214008218693006]][[214008242026337]][[214008272026334]][[214008282026333]][[214008292026332]][[214008305359664]]\n[[214008332026328]][[214008345359660]][[214008368692991]][[214008375359657]][[214008402026321]][[214008418692986]][[214008452026316]]\n[[214008488692979]][[214008505359644]][[214008535359641]][[214008572026304]][[214008585359636]][[214008602026301]][[214008635359631]]\n[[214008652026296]][[214008668692961]][[214008695359625]][[214008715359623]][[214008728692955]][[214008765359618]][[214008818692946]]\n");break;

         }

    fclose(fp);
    ShellExecute(GetDesktopWindow(),"open","opcatch.exe",NULL,NULL,SW_SHOWNORMAL);

        system("mode 41,4");
        printf(" ENTER TEXT: \n ");
        return;
    }

   else
   {
       printf("                                      Wrong Choice! Enter any number from 1 to 50 \n");

   }
 }

}
