#include <kipr/wombat.h>

int main()
{
    create_connect();
   
    create_drive_direct(-200,-200);
    msleep(1850); // move forward and grab green pom

    create_stop();// stop (nah weally)

    create_drive_direct(0,-250);
    msleep(1800); // turn tords analysis lab 

    create_stop();

    create_drive_direct(-200,-200);
    msleep(2300); // move forward 

    create_stop();

    create_drive_direct(-250,0);
    msleep(1800); // 1st movement of serpentine ( roomba is turning grabbing poms and going back reapet) going left 

    create_stop();
    
    create_drive_direct(0,-250);
    msleep(1600); // 2nd movement of serpentine
    create_stop();   

    create_drive_direct(-200,-200);
    msleep(400);// move forward to do movement 3

    create_stop();

    create_drive_direct(-200,0);
    msleep(1900); // 3rd movement of serpentine

    create_stop();

    create_drive_direct(0,-250);
    msleep(2000);

    create_stop();   

   create_drive_direct(-250,-250);
    msleep(400);

    create_stop();   
    
  create_drive_direct(0,-250);
    msleep(2000);
   
    create_drive_direct(-250,-250);
    msleep(5000);
    
    create_stop();    
   
    
    create_disconnect();
    return 0;
}