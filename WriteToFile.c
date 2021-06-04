# include <stdio.h>
# include <string.h>
   
int main( )
{
    FILE *filePointer ;
    char dataToBeWritten[50] 
        = "Hello World.We are writing to a file.";
    filePointer = fopen("write.txt", "w") ;

    if ( filePointer == NULL )
    {
        printf( "write.txt file failed to open." ) ;
    }
    else
    {  
        printf("The file is now opened.\n") ;
        if ( strlen (dataToBeWritten) > 0 )
        {
            fputs(dataToBeWritten, filePointer) ;   
            fputs("\n", filePointer) ;
        }
        fclose(filePointer) ;
          
        printf("Data successfully written in file.\n");
        printf("The file is now closed.") ;
    }
    return 0;        
}