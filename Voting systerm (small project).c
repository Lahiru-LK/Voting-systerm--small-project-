#include<stdio.h> 		 //standed input output library
#include <stdlib.h>		//header defines four variable types		
#include<conio.h>		//Console Input Output Header 
#include<time.h>		//Time line  Header



int main(){
	int x,y,b,q,count,i,
		chans,vote_number,Undeclared_votes,
		lahiru_vote=0,
		vote_count=0,Prasad_vote=0,						//define variable			
		Janith_vote=0,Buddhi_vote=0,
		Sachin_vote=0,inValid_votes=0,Valid_votes;

	float prasentage_inValid,prasentage_Undeclared,prasentage_Valid,prasentage_lahiru,    //define variable
		prasentage_Prasad,prasentage_Janith,prasentage_Buddhi,
		prasentage_Sachin;
		
		printf("\n\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
		printf("________________________________________________________________________________________________ ICT CLUB _________________________________________________________________________________________________________\n");
		printf("\t\t\t\t\t\t\t\t\t              --------voting systerm--------\n");				                                            
			
printf("\n\n\n\n\t\t\t\t\t#1 - START\n\t\t\t\t\t#0 - EXit\n \t\t\t\t\t\tENter Number :  ");
scanf("%d",&y);	//Get  user input for stat or exit 
printf("\n\n\n");

system("cls");	//Close close current and new window   

switch(y){
		//Check user input using switch case 
		case 1:{	
	
	printf("\n\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n\n\n");
	printf("\n\n\n\t\t\t\t\t\t\t\t\t             	____________________________\n\n");
	printf("\t\t\t\t\t\t\t\t\t               -!!! STARt Voting system !!!-\n");		
	printf("\t\t\t\t\t\t\t\t\t             	____________________________\n");
	
    time_t tm;		
    time(&tm);
    printf("\t\t\t\t\t\t\t\t\t             	  %s\n\n\n\n\n\n\n\n", ctime(&tm)); //Get time and date 	
   
    printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
					
					sleep(4);		// Sleep for 4 sec
					system("cls"); //Close close current and new window

						printf("\n\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
						printf("________________________________________________________________________________________________ ICT CLUB _________________________________________________________________________________________________________\n");
						printf("\t\t\t\t\t\t\t\t\t              --------voting systerm--------\n\n\n");
						
					printf("\n\t\tStart voting "); //Start  Voting 
					for(i=1;i<=10;i++){
					sleep(1);					
					printf(".");}
					
					system("cls");	//Close close current and new window

	
					

  for (count=1;count<=10;count++){
  				// Forloop for get the 10 user input
	
	printf("\n\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
	printf("________________________________________________________________________________________________ ICT CLUB _________________________________________________________________________________________________________\n");
	printf("\t\t\t\t\t\t\t\t\t              --------voting systerm--------\n\n\n\n\n\n");					

	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t#1 - YES\n\t\t\t\t\t#0 - NO\n\t\t\t\t\t     members '%d'\n\t\t\t\t\tDo you Like to Vote ?   - ",count);
	scanf("%d",&x);		//  Ask if the user would like to vote or not
	
	system("cls");  //Close close current and new window
	
	switch(x){
			//Check user input using switch case	
		case 1:
			
	system("cls");//Close close current and new window
	printf("\n\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
	printf("________________________________________________________________________________________________ ICT CLUB _________________________________________________________________________________________________________\n");
	printf("\t\t\t\t\t\t\t\t\t              --------voting systerm--------\n\n\n\n\n\n");
			
			printf("\n\n\t\t\t\t\t\t\t\t\t=============== Presidential APPLICANTs =============== \n\n");	
			printf("\t\t\t\t\t\t\t\t\t\t      --No--          --Name--\n\n");		
			printf(" \t\t\t\t\t\t\t\t\t\t\t#1 	 -     Lahiru\n");
			printf(" \t\t\t\t\t\t\t\t\t\t\t#2       -     Prasad\n");
			printf(" \t\t\t\t\t\t\t\t\t\t\t#3       -     Janith\n");
			printf(" \t\t\t\t\t\t\t\t\t\t\t#4       -     Buddhi\n");			//print Applicants and their number
			printf(" \t\t\t\t\t\t\t\t\t\t\t#5	 -     Sachin\n\n\n");
			
			for (chans=1;chans<=3;chans++){
								// Forloop for get 3 vote
				printf("\t\t\t\t\t\t\t\t%d-Enter the Voting number of applicant :  ",chans); 
				scanf("%d",&vote_number);	//Get user votes
				
						//check vote validity and count votes
				if(vote_number==1){
					lahiru_vote=lahiru_vote+1;		
				}
				else if(vote_number==2){
					Prasad_vote=Prasad_vote+1;
				}
				else if(vote_number==3){
					Janith_vote=Janith_vote+1;		
				}
				else if(vote_number==4){
					Buddhi_vote=Buddhi_vote+1;
				}
				else if(vote_number==5){
					Sachin_vote=Sachin_vote+1;
				}
				else{
					inValid_votes=inValid_votes+1;
				}			
			}
				printf("\n\n\n\t\t\t\t\t\t\t\t\t     >>>>>>>>>> Thank you for Your Voted <<<<<<<<<< \n\n\n\n");
					//End  of the votes
				
					printf("\n\t\tNext member ");	//Go to next members  
					for(i=1;i<=8;i++){
					sleep(1);
					printf(".");}
				
			system("cls");		//Close close current and new window
			break;
	
		
		
		default:
			//don't like to vote  counts 
			Undeclared_votes=Undeclared_votes+1;
			
			
	system("cls");//Close close current and new window
	printf("\n\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
	printf("________________________________________________________________________________________________ ICT CLUB _________________________________________________________________________________________________________\n");
	printf("\t\t\t\t\t\t\t\t\t              --------voting systerm--------\n\n\n\n\n\n");
			printf("\n\n\n\t\t\t\t\t\t\t\t\t  >>>>>>>>>> Thank you for Your Voted <<<<<<<<<< \n\n\n\n");
		//End  of the votes	
			printf("\n\t\tNext member ");
					for(i=1;i<=8;i++){				//Go to next members
					sleep(1);
					printf(".");}
					system("cls");
			
	
	    	   }
        	}
    	
   
    	}
		
 }
	printf("\n\n");
	printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n\n\n");
	printf("\n\n\n\t\t\t\t\t\t\t\t\t             	____________________________\n\n");
	printf("\t\t\t\t\t\t\t\t\t                -!!! ENd Voting system !!!-\n");		
	printf("\t\t\t\t\t\t\t\t\t             	____________________________\n");


		
		time_t tm;
    	time(&tm);						//Get time and date 
    	 printf("\t\t\t\t\t\t\t\t\t             	  %s\n\n\n\n\n\n\n\n", ctime(&tm));	
	
	    printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
					
					sleep(4);			// Sleep for 4 sec
					system("cls");		//Close close current and new window

						printf("\n\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
						printf("________________________________________________________________________________________________ ICT CLUB _________________________________________________________________________________________________________\n");
						printf("\t\t\t\t\t\t\t\t\t              --------voting systerm--------\n\n\n");
		
		
		printf("\n\n\n\n\t\t\t\t\t#1 - REsults\n	\t\t\t\t#0 - EXit \n\t\t \t\t\t\t     ENter Number :  ");
		scanf("%d",&b);		//  Ask if the user would like to See Rasults or EXit
		
		switch(b){		
		
				//check user input
			case 1:				
				system("cls");		//Close close current and new window
				
				printf("\n\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
				printf("________________________________________________________________________________________________ ICT CLUB _________________________________________________________________________________________________________\n");
				printf("\t\t\t\t\t\t\t\t\t              --------voting systerm--------\n");
				
				printf("\n\n\n\n\t\t\t\tProcessing data ");			//Waiting for results 
				for(i=1;i<=9;i++){
				sleep(1);
				printf(".");
				
				
}
				
					Valid_votes=lahiru_vote+Prasad_vote+Janith_vote+Buddhi_vote+Sachin_vote;		//Count of valid Votes
					
					prasentage_Valid=((Valid_votes/30.0)*100.0);				// count presentage of valid Votes
					prasentage_inValid=((inValid_votes/30.0)*100.0);			// count presentage of invalid Votes
					prasentage_Undeclared=((Undeclared_votes/10.0)*100.0);		// count presentage of Undeclared Votes
					
						// count presentage of Aplicents votes Separately					
					prasentage_lahiru=((lahiru_vote/30.0)*100.0);	
					prasentage_Prasad=((Prasad_vote/30.0)*100.0);
					prasentage_Janith=((Janith_vote/30.0)*100.0);
					prasentage_Buddhi=((Buddhi_vote/30.0)*100.0);
					prasentage_Sachin=((Sachin_vote/30.0)*100.0);
					
			sleep(1);
			system("cls");//Close close current and new window
			
				printf("\n\n\n\n___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
				printf("________________________________________________________________________________________________ ICT CLUB _________________________________________________________________________________________________________\n");
				printf("\t\t\t\t\t\t\t\t\t              --------voting systerm--------\n\n\n");
				
				//Print Count of votes 
				
				printf("\n\t\t\t\t\t\t\t\t\t   -*=*==*=* 'ICT CLUB' voting systerm REsault -*=*==*=*\n\n");
		
		printf("                             ----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");			
		printf("\n\t\t\t\t\t\t\t\t\t	+	Lahiru voted  : %d  -  %.2f %%\n",lahiru_vote,prasentage_lahiru);
		printf("\t\t\t\t\t\t\t\t\t	+	Prasad voted  : %d  -  %.2f %%\n",Prasad_vote,prasentage_Prasad);
		printf("\t\t\t\t\t\t\t\t\t	+	Janith voted  : %d  -  %.2f %%\n",Janith_vote,prasentage_Janith);
		printf("\t\t\t\t\t\t\t\t\t	+	Buddhi voted  : %d  -  %.2f %%\n",Buddhi_vote,prasentage_Buddhi);
		printf("\t\t\t\t\t\t\t\t\t	+	Sachin voted  : %d  -  %.2f %%\n\n",Sachin_vote,prasentage_Sachin);
		
		printf("\t\t\t\t\t\t\t\t\t	+    '*Valid votes*'       : '%d/30'   -  %.2f %%\n",Valid_votes,prasentage_Valid);
		printf("\t\t\t\t\t\t\t\t\t	+    '*inValid votes*'     : '%d/30'    -  %.2f %%\n",inValid_votes,prasentage_inValid);	
		printf("\t\t\t\t\t\t\t\t\t	+    '*Undeclared votes*'  : '%d/10'    -  %.2f %%\n",Undeclared_votes,prasentage_Undeclared);	

	//Find Winner
	
  if(Valid_votes>0){
  		

	if ((lahiru_vote>=Prasad_vote)&&(lahiru_vote>=Janith_vote)&&(lahiru_vote>=Buddhi_vote )&&(lahiru_vote>=Sachin_vote)  ){
		if((lahiru_vote==Prasad_vote)||(lahiru_vote==Janith_vote)||(lahiru_vote==Buddhi_vote)||(lahiru_vote==Sachin_vote)){
		
						
					
					printf("\n\t\t\t\t\telection WINNER ");
					for(i=1;i<=5;i++){
					sleep(1);
					printf(".");}
					
					system("COLOR 04");
					
					printf("\n\n\t\t\t\t\t\t\t\t\t 'ICT Club 2021' presidentaial election WINNER is >>> 'No winner' <<<    \n\n");
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t\t**--'SAME  WINNER'--**  \n\n");
					
		for(q=1;q<=5;q++){
			if(q==1){
				if(lahiru_vote==Prasad_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Prasad'----\n ");
				}	
			}else if(q==2){
				if(lahiru_vote==Janith_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Janith'----\n");
				}
			}else if(q==3){
				if(lahiru_vote==Buddhi_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Buddhi'----\n");
				}
			}else if(q==4){
				if(lahiru_vote==Sachin_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Sachin'----\n ");	
				}
			}else if (q==5){
				sleep(1);
				printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Lahiru'----\n\n");
				sleep(1);
			}
		   }
	/**/}else  if	((lahiru_vote>Prasad_vote)&& (lahiru_vote>Janith_vote) && (lahiru_vote>Buddhi_vote)&& (lahiru_vote>Sachin_vote)){
						
						
						printf("\n\t\t\t\t\telection WINNER ");
						for(i=1;i<=7;i++){
						sleep(1);
						printf(".");}
						
						system("COLOR 03");	
						
						printf("\n\n\t\t\t\t\t\t\t\t\t 'ICT Club 2021' presidentaial election WINNER is >>> 'Lahiru' <<<   \n"); 
						sleep(2);
						printf("\n\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Lahiru'----   \n\n");
						sleep(1);
				}	
		
//------------------------------------------------------		
						
	 }else if ((Prasad_vote>=Janith_vote)&&(Prasad_vote>=Buddhi_vote)&&(Prasad_vote>=Sachin_vote) ){
	 			if((Prasad_vote==Janith_vote)||(Prasad_vote==Buddhi_vote)||(Prasad_vote==Sachin_vote)||(Prasad_vote==lahiru_vote)){
	 		
	 				system("COLOR 04");	
	 				
					printf("\n\t\t\t\t\telection WINNER ");
					for(i=1;i<=5;i++){
					sleep(1);
					printf(".");}
					
					system("COLOR 04");	
	 				
					printf("\n\n\t\t\t\t\t\t\t\t\t 'ICT Club 2021' presidentaial election WINNER is >>> 'No winner' <<<    \n\n");
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t\t**--'SAME  WINNER'--**  \n\n");
					
	 		
			 for(q=1;q<=5;q++){
			if(q==1){
				if(Prasad_vote==Janith_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Janith'----\n ");
				}	
			}else if(q==2){
				if(Prasad_vote==Buddhi_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Buddhi'----\n ");
				}
			}else if(q==3){
				if(Prasad_vote==Sachin_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Sachin'----\n ");
				}
			}else if(q==4){
				if(Prasad_vote==lahiru_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Lahiru'----\n ");	
				}
			}else if (q==5){
				sleep(1);
				printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Prasad'----\n\n ");
				sleep(1);
			}
		   }
	/**/  }else if ((Prasad_vote>Janith_vote) && (Prasad_vote>Buddhi_vote) && (Prasad_vote>Sachin_vote)){
					
							
						
						printf("\n\t\t\t\t\telection WINNER ");
						for(i=1;i<=7;i++){
						sleep(1);
						printf(".");}
						
						system("COLOR 0A");
						
						printf("\n\n\t\t\t\t\t\t\t\t\t 'ICT Club 2021' presidentaial election WINNER is >>> 'Prasad' <<<   \n"); 
						sleep(2);					
						printf("\n\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Prasad'----   \n\n"); 
						sleep(1);
				}
		   
	//------------------------------------------------------	   
	 }else if ((Janith_vote>=Buddhi_vote)&&(Janith_vote>=Sachin_vote) ){
	 			if((Janith_vote==Sachin_vote)||(Janith_vote==Buddhi_vote)||(Janith_vote==Prasad_vote)||(Janith_vote==lahiru_vote)){
	 			    
					 
					
					printf("\n\t\t\t\t\telection WINNER ");
					for(i=1;i<=5;i++){
					sleep(1);
					printf(".");}
						
					system("COLOR 04");	
	 				
					printf("\n\n\t\t\t\t\t\t\t\t\t 'ICT Club 2021' presidentaial election WINNER is >>> 'No winner' <<<    \n\n");
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t\t**--'SAME  WINNER'--**  \n\n");
	 	
	 	for(q=1;q<=5;q++){
			if(q==1){
				if(Janith_vote==Sachin_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Sachin'----\n ");
				}	
			}else if(q==2){
				if(Janith_vote==Buddhi_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Buddhi'----\n "); 
				}
			}else if(q==3){
				if(Janith_vote==Prasad_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Prasad'----\n ");
				}
			}else if(q==4){
				if(Janith_vote==lahiru_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Lahiru'----\n ");	
				}
			}else if (q==5){
				sleep(1);
				printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Janith'----\n\n ");
				sleep(1);
			}
		   }
/**/     }else if ((Janith_vote>Buddhi_vote) &&(Janith_vote>Sachin_vote)){
					
						
						
						printf("\n\t\t\t\t\telection WINNER ");
						for(i=1;i<=7;i++){
						sleep(1);
						printf(".");}
						
							system("COLOR 06");
							
						printf("\n\n\t\t\t\t\t\t\t\t\t 'ICT Club 2021' presidentaial election WINNER is >>> 'Janith' <<<   \n"); 
						sleep(2);
						printf("\n\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Janith'----    \n\n"); 
						sleep(1);
				}
	 	
//------------------------------------------------------------	 
	 	
	 }else if ((Buddhi_vote>=Sachin_vote)){
	 			if((Buddhi_vote==Sachin_vote)||(Buddhi_vote==Janith_vote)||(Buddhi_vote==Prasad_vote)||(Buddhi_vote==lahiru_vote)){
	 			
				 		
				 	
					printf("\n\t\t\t\t\telection WINNER ");
					for(i=1;i<=5;i++){
					sleep(1);
					printf(".");}
					
					system("COLOR 04");	
	 				
					printf("\n\n\t\t\t\t\t\t\t\t\t 'ICT Club 2021' presidentaial election WINNER is >>> 'No winner' <<<    \n\n");
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t\t**--'SAME  WINNER'--**  \n\n");	
	 			
	 	
	 	for(q=1;q<=5;q++){
			if(q==1){
				if(Buddhi_vote==Sachin_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Sachin'----\n");
				}	
			}else if(q==2){
				if(Buddhi_vote==Janith_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Janith'----\n ");
				}
			}else if(q==3){
				if(Buddhi_vote==Prasad_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Prasad'----\n ");
				}
			}else if(q==4){
				if(Buddhi_vote==lahiru_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Lahiru'----\n ");	
				}
			}else if (q==5){
				sleep(1);
				printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Buddhi'----\n\n ");
				sleep(1);
			}
		   }
/**/	 }else if ((Buddhi_vote>Sachin_vote)){
					
							
						
						printf("\n\t\t\t\t\telection WINNER ");
						for(i=1;i<=7;i++){
						sleep(1);
						printf(".");}
					
				  		system("COLOR 05");
				  		
						printf("\n\n\t\t\t\t\t\t\t\t\t 'ICT Club 2021' presidentaial election WINNER is >>> 'Buddhi' <<<   \n"); 
						sleep(2);
						printf("\n\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Buddhi'----    \n\n"); 
						sleep(1);
				}

//----------------------------------------------------	 	
	 }else if ((Sachin_vote>0) ){
	 			if((Sachin_vote==Buddhi_vote)||(Sachin_vote==Janith_vote)||(Sachin_vote==Prasad_vote)||(Sachin_vote==lahiru_vote)){
	 				
					 
					 
					printf("\n\t\t\t\t\telection WINNER ");
					for(i=1;i<=5;i++){
					sleep(1);
					printf(".");}
					
					
					system("COLOR 04");	
	 					
					printf("\n\n\t\t\t\t\t\t\t\t\t 'ICT Club 2021' presidentaial election WINNER is >>> 'No winner' <<<    \n\n");
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t\t**--'SAME  WINNER'--**  \n\n");
	 	
	 	for(q=1;q<=5;q++){
			if(q==1){
				if(Sachin_vote==Buddhi_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Buddhi'----\n ");
				}	
			}else if(q==2){
				if(Sachin_vote==Janith_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Janith'----\n ");
				}
			}else if(q==3){
				if(Sachin_vote==Prasad_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Prasad'----\n ");
				}
			}else if(q==4){
				if(Sachin_vote==lahiru_vote){
					sleep(1);
					printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Lahiru'----\n ");	
				}
			}else if (q==5){
				sleep(1);
				printf("\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Sachin'----\n\n ");
				sleep(1);
			}
		   }
/**/	  }else if ((Sachin_vote>0))		{
						
					
					printf("\n\t\t\t\t\telection WINNER ");
					for(i=1;i<=7;i++){
					sleep(1);
					printf(".");}
					
					system("COLOR 09");
					
						printf("\n\n\t\t\t\t\t\t\t\t\t 'ICT Club 2021' presidentaial election WINNER is >>> 'Sachin' <<<   \n"); 
						sleep(2);
						printf("\n\t\t\t\t\t\t\t\t\t\t\t   ----congratulation ! 'Sachin'----   \n\n"); 
						sleep(1);
			} 
		}
//-----------------------------------------------
    }else {		
						
					
						
					printf("\n\t\t\t\t\telection WINNER ");
					for(i=1;i<=7;i++){
					sleep(1);
					printf(".");}
					
					system("COLOR 04");	
	 				
					printf("\n\n\t\t\t\t\t\t\t\t\t 'ICT Club 2021' presidentaial election WINNER is >>> 'No winner' <<<    \n\n");
					sleep(1); 
		}
				
				
										
				printf("                             ----------------------------------------------------------------------------------------------------------------------------------------------------------------\n");			
				printf("\n\n");
		
		
		
		
		
			printf("\n\n\t\t\t\t\t\t\t\t\t\t\t      ****WELCOME****\n");
			printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
			printf("________________________________________________________________________________________________ ICT CLUB _________________________________________________________________________________________________________\n");
			printf("\t\t\t\t\t\t\t\t\t              --------voting systerm--------\n\n\n\n\n\n\n\n\n");
		
			break;
		
	default:
			system("cls");		

			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t      ****WELCOME****\n");
			printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
			printf("________________________________________________________________________________________________ ICT CLUB _________________________________________________________________________________________________________\n");
			printf("\t\t\t\t\t\t\t\t\t              --------voting systerm--------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	}		
	//End Mini projects 		
	return 0;
}





