KeyboardHandler
===============

This open-source library lets you deal with complexity of handling Mulitple InputFields with minimal code setup.

While designing a UI, which contains a number of Input Elements (which requires keyboard to pop-up) leads a number of aspects to be handled. Handling those apsects also leads to clutter of code whcich has no logical aspect of the project and are required to be repeated whenever we encouter a similar situation. So, here is this library which aims to handle all those aspects for you and let you go ahead whith your project with minimal code.

Following aspects has been considered while working with multiple Input Elements
A - Hiding of Keyboard on user intent
B - Easy Navigation among mulitple Input Fields
C - Accessibility to whole view when keyboard has poped-up
D - Focusing of InputElement that is currently active


Solution approach for above aspects
A - User can hide keyboard in two ways
     -By touching any area outside the inputElement
     -By choosing the 'Done' button on accessory Toolbar
B - User can navigate among various fields through 'next' and 'previous' button on accessory Toolbar
C - ScrollView bottom edge will be repositioned along with keyboard top edge, when keyboard appears or disappears
D - InputElement is brought to visible area whenever it becomes active.


API Usage Guide
    //Declare Reference for KeyboardHandler in class defination
    KeyboardHandler *keybHandler;

    //Initialize Keyboard handler in your ViewDidLoad: callback
    keybHandler = [[KeyboardHandler alloc] init];
    keybHandler.inputItems = @[self.inputField1,self.inputField2];
    keybHandler.hostingSCVW = self.scrollView;
    
    
    inputItems - refers to array of input elements in order of sequece we wish to traverse them
    hostingSCVW - refers to scrollView which is hosting all the input Elements
    
    

Customizing the keyboard Accessory Toolbar
KeybAccView.xib - This files contains the UI specification of Keyboard Accessory Toolbar and can be changed according to the requirment.

NOTE:
This Code is ARC Complaint. So when dealing with a non-arc project, include -fobjc-arc compiler flag in Build Phases section of Target Settings


I hope you find this library helpfull.
Do post your feedback and queries.
