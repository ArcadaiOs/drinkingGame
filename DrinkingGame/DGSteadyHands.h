//
//  DGSteadyHands.h
//  DrinkingGame
//
//  Created by JonS on 2/2/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
#import "DGGame.h"
#import "DGController.h"

@interface DGSteadyHands : DGGame <

    UIAccelerometerDelegate> {

    IBOutlet UILabel *labelX;
    IBOutlet UILabel *labelY;
    IBOutlet UILabel *labelZ;
    IBOutlet UIProgressView *progressX;
    IBOutlet UIProgressView *progressY;
    IBOutlet UIProgressView *progressZ;
    UIAccelerometer *accelerometer;
    double accelvalue;
        
        
        NSTimer *timer1;
        NSTimer *timer2;
        
        IBOutlet UIButton *mole1;
        IBOutlet UIButton *mole2;
        IBOutlet UIButton *mole3;
        UIButton *startPlayingBtn;
        UIButton *nextPlayerBtn;
        UIButton *quitPlayingBtn;
        
        IBOutlet UILabel *scoreLabelText;
        IBOutlet UILabel *scoreLabel;
        IBOutlet UILabel *playerNameText;
        IBOutlet UILabel *playerName;
        IBOutlet UILabel *playerName2;
        IBOutlet UILabel *timeLeftText;
        IBOutlet UILabel *timeLeft;
        IBOutlet UILabel *playerScore;
        IBOutlet UILabel *resultTitle;
        IBOutlet UILabel *playerScores;
        UILabel *playerName0;
        UILabel *yourUpNext;
        
        IBOutlet UIView *gameView;
        IBOutlet UIView *startView;
        IBOutlet UIView *endView;
        
        NSString *zeroes;
        NSMutableString *results;
        
        int molesShown;
        int molesHit;
        int seconds;
        int maxMoles;
        int playerCount;
        
        NSMutableDictionary *points;
        NSArray *nameCollection;
        NSArray *buttonWithFonts;

}
@property(nonatomic,retain) IBOutlet UILabel *labelX;
@property(nonatomic,retain) IBOutlet UILabel *labelY;
@property(nonatomic,retain) IBOutlet UILabel *labelZ;
@property(nonatomic,retain) IBOutlet UIProgressView *progressX;
@property(nonatomic,retain) IBOutlet UIProgressView *progressY;
@property(nonatomic,retain) IBOutlet UIProgressView *progressZ;
@property(nonatomic,retain) UIAccelerometer *accelerometer;
/*ARRAYS&/DICTIONARIES*/
@property (nonatomic, retain) IBOutletCollection(UIButton) NSArray *buttonWithFonts;
@property (nonatomic, retain) IBOutletCollection(UILabel) NSArray *nameCollection;
@property(nonatomic,retain) NSMutableDictionary *points;
/*VIEWS*/
@property(nonatomic, retain) IBOutlet UIView *gameView;
@property(nonatomic, retain) IBOutlet UIView *startView;
@property(nonatomic, retain) IBOutlet UIView *endView;
/*STRINGS*/
@property(nonatomic,retain) NSString *zeroes;
@property(nonatomic,retain) NSMutableString *results;
/*TIMERS*/
@property(nonatomic,retain) NSTimer *timer1;
@property(nonatomic,retain) NSTimer *timer2;
/*LABELS*/
/*LABELS-VIEW1*/
@property (nonatomic, retain) IBOutlet UILabel *yourUpNext;
@property (nonatomic, retain) IBOutlet UILabel *playerName0;
/*LABELS-VIEW2*/
@property(nonatomic,retain) IBOutlet UILabel *scoreLabelText;
@property(nonatomic,retain) IBOutlet UILabel *scoreLabel;
@property(nonatomic,retain) IBOutlet UILabel *playerNameText;
@property(nonatomic,retain) IBOutlet UILabel *playerName;
@property(nonatomic,retain) IBOutlet UILabel *timeLeftText;
@property(nonatomic,retain) IBOutlet UILabel *timeLeft;
/*LABELS-VIEW3*/
@property(nonatomic,retain) IBOutlet UILabel *playerName2;
@property(nonatomic,retain) IBOutlet UILabel *playerScore;
@property(nonatomic,retain) IBOutlet UILabel *resultTitle;
@property(nonatomic,retain) IBOutlet UILabel *playerScores;
/*INT*/
@property int molesHit;
@property int molesShown;
@property int seconds;
@property int maxMoles;
@property int playerCount;
@property float accelerattt;
/*BUTTONS*/
/*BUTTONS-VIEW1*/
@property (nonatomic, retain) IBOutlet UIButton *startPlayingBtn;
/*BUTTONS-VIEW2*/
@property(nonatomic,retain) IBOutlet UIButton *mole1; 
@property(nonatomic,retain) IBOutlet UIButton *mole2;
@property(nonatomic,retain) IBOutlet UIButton *mole3;
/*BUTTONS-VIEW3*/
@property (nonatomic, retain) IBOutlet UIButton *nextPlayerBtn;
@property (nonatomic, retain) IBOutlet UIButton *quitPlayingBtn;

/*FUNCTIONS*/
-(IBAction)addScore:(id)sender;
-(IBAction)startGameAction:(id)sender;
-(IBAction)startNextPlayer:(id)sender;
-(void)endTimers;
-(void)startTimers;
-(void)setFonts;
-(void)updateIntervalForMoles:(NSTimer*)theTimer;
-(void)updateSeconds:(NSTimer*)theTimer;
-(int) getRandomIntMin:(int) min max:(int) max;

@end
