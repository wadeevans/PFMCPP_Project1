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
//  Noun:       athlete
//  action 1:   the athlete runs
athlete.run();
//  action 2:   the athlete swims
athlete.swim();
//  action 3:   the athlete jumps
athlete.jump();
//  2)
//  Noun:       audio effect
//  action 1:   the audio effect compresses
audioEffect.compress();
//  action 2:   the audio effect limits
audioEffect.limit();
//  action 3:   the audio effect saturates
audioEffect.saturate(); 
//  3)
//  Noun:       face
//  action 1:   the face frowns
face.frown();
//  action 2:   the face laughs
face.laugh();
//  action 3:   the face smiles
face.smile(); 
//  4)
//  Noun:       eye
//  action 1:   the eye closes
eye.close();
//  action 2:   the eye opens
eye.open();
//  action 3:   the eye blinks
eye.blink(); 
//  5)
//  Noun:       cat
//  action 1:   the cat chases a mouse
cat.chaseMouse();
//  action 2:   the cat purrs
cat.purr();
//  action 3:   the cat pounces
cat.pounce(); 
//  6)
//  Noun:       mouse
//  action 1:   the mouse annoys the cat
mouse.annoyCat();
//  action 2:   the mouse eats cheese
mouse.eatCheese();
//  action 3:   the mouse runs away from the cat
mouse.runAwayFromCat();
//  7)
//  Noun:       mad scientist
//  action 1:   the mad scientist builds a death ray
madScientist.buildDeathRay();
//  action 2:   the mad scientist threatens the world
madScientist.threatenTheWorld();
//  action 3:   the mad scientist fails miserably
madScientist.failMiserably(); 
//  8)
//  Noun:       app
//  action 1:   the app opens a window
app.openWindow();
//  action 2:   the app freezes the computer
app.freezeComputer();
//  action 3:   the app closes
app.close(); 
//  9)
//  Noun:       fish
//  action 1:   the fish rides a bicycle
fish.rideBicycle();
//  action 2:   the fish watches televison
fish.watchTelevision();
//  action 3:   the fish swims around the tank
fish.swimAroundTank(); 
//  10)
//  Noun:       student
//  action 1:   the student stares into space
student.stareIntoSpace();
//  action 2:   the student loses his notes
student.loseNotes();
//  action 3:   the student fails his exam
student.failExam(); 


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
