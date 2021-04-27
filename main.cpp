#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       window
//  action 1:   the window opens
window.opens();
//  action 2:   the window closes
window.closes();
//  action 3:   the window breaks
window.destroy();
//  2)
//  Noun:       wheel
//  action 1:   the wheel spins
wheel.spins();
//  action 2:   the wheel stops
wheel.stops();
//  action 3:   the wheel resumes motion
wheel.resumes(); 
//  3)
//  Noun:       computer
//  action 1:   the computer drains battery
computer.drainsBattery();
//  action 2:   the computer logs an error
computer.logError();
//  action 3:   the computer explodes
computer.explodes();
//  4)
//  Noun:       cloud
//  action 1:   the cloud generates a lightning bolt
cloud.makeLightningBolt();
//  action 2:   the cloud forms
cloud.form();
//  action 3:   the cloud dissolves
cloud.dissolve();
//  5)
//  Noun:       monkey
//  action 1:   the monkey jumps
monkey.jump();
//  action 2:   the monkey spins
monkey.spin();
//  action 3:   the monkey runs
monkey.run();
//  6)          
//  Noun:       truck
//  action 1:   the truck moves 
truck.moves();
//  action 2:   the truck leaks oil
truck.leaksOil();
//  action 3:   the truck turns on the lights
truck.turnsLightsOn();
//  7)
//  Noun:       student
//  action 1:   the student goes to school 
student.goToSchool();
//  action 2:   the student comes back home
student.goHome();
//  action 3:   the student graduates
student.graduate();
//  8)
//  Noun:       iceCream
//  action 1:   the ice cream falls on concrete
iceCream.fallOnConcrete();
//  action 2:   the ice cream melts in x time
iceCream.meltInTime();
//  action 3:   the ice cream falls from x height
iceCream.fallFromHeight();
//  9)
//  Noun:       atom
//  action 1:   the atom forms
atom.form();
//  action 2:   the atom splits
atom.split();
//  action 3:   the atom loses an electron
atom.loseElectron();
//  10)
//  Noun:       bottle
//  action 1:   the bottle leaks 
bottle.leak();
//  action 2:   the bottle falls
bottle.fall();
//  action 3:   the bottle cracks
bottle.crack();



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
