#include <kipr/wombat.h>

//right motor 2
//left motor 0
//gray claw servo 0/open claw 1271/closed 300
//orange claw servo 2/closed 464/open 1199
// botgal in analysis lab
int main()
{
    printf("Hello World\n");
    enable_servos();
    set_servo_position(0,300);
    msleep(1000);
    ao();
    //close the gray claw to rest and get ready for the run going to get botgal reset 1
    set_servo_position(2,464);
    msleep(1000);
    ao();
    //close the orange claw to rest and get ready for the run going to get botgal reset 2
    mav(0,1000);
    mav(2,100);
    msleep(2100);
    ao();
    //turn right across black line into cybersecurity lab going to get botgal turn 1
    mav(0,1000);
    mav(2,1000);
    msleep(2700);
    ao();
    //going straight in cybersecurity about to turn going to get botgal forward 1
    mav(0,100);
    mav(2,1000);
    msleep(2500);
    ao();
    //turn left across black line into data center going to get botgal turn 2
    mav(0,1000);
    mav(2,1000);
    msleep(2300);
    ao();
    //going straight in data center going to get botgal forward 2
    mav(0,100);
    mav(2,1000);
    msleep(2500);
    ao();
    //turn left in data center going to get botgal turn 3
    mav(0,1000);
    mav(2,1000);
    msleep(3800);
    ao();
    //going straight in data center forward 3
    set_servo_position(2,1199);
    msleep(500);
    ao();
    //straight in data center opening the claw going to get botgal open 1
    set_servo_position(0,1100);
    msleep(1900);
    ao();
    //going to get botgal/ on black line between both data centers/ open 2
    mav(0,1000);
    mav(2,100);
    msleep(1500);
    ao();
    // turn right on black line in between both data centers/ last motor to get botgal last step turn 4
    set_servo_position(0,350);
    msleep(1900);
    ao();
    //grabing botgal on black line between both data centers/ grab 1/ closed 1
    mav(0,-500);
    mav(2,-500);
    msleep(2000);
    ao();
    //going backward in the middle of both data centers going to put botgal down forwad
    mav(0,100);
    mav(2,1000);
    msleep(2300);
    ao();
    //going to drop botgal in analysis lab turn 5
    mav(0,1000);
    mav(2,1000);
    msleep(1000);
    ao();
    //going to drop botgal in analysis lab forward 5
    mav(0,100);
    mav(2,1000);
    msleep(2300);
    ao();
    // going to drop botgal in analysis lab/ turn 6
    set_servo_position(0,1265);
    msleep(2000);
    ao();
    //droping botgal in analysis lab/ open 3
    mav(0,-1000);
    mav(2,-1000);
    msleep(1300);
    ao();
    //backing up/ in data center  
    mav(0,100);
    mav(2,1000);
    msleep(2300);
    ao();
    // turning/ in data center
    
    
    disable_servos();
    return 0;
}
