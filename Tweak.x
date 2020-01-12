#import "Headers.h"
#import "SpringBoard-Class.h"

NSString *aog = @"AOG Mode triggered";
NSString *passphrase = @"test";
BOOL aogmode;
id SB;

%hook BBBulletin
- (void)setSectionID:(NSString*)arg1
{
        if ([arg1 isEqualToString: @"com.apple.MobileSMS"] || [arg1 isEqualToString: @"com.google.Gmail"]  || [arg1 isEqualToString: @"ph.telegra.Telegraph"])
              {
				   if ([[self message] isEqual: passphrase]) {
              aogmode = YES;
              [self setMessage: aog];
              [SB _updateRingerState:1 withVisuals:true updatePreferenceRegister:true];
				   }
			   }
        %orig(arg1);
}
%end

%hook SpringBoard
-(void)_updateRingerState:(int)silentstate withVisuals:(bool)displayVisuals updatePreferenceRegister:(bool)arg3{
    if (silentstate == 0 && aogmode){
      silentstate = 1;
    }
  %orig(silentstate,displayVisuals,arg3);
}

- (void)applicationDidFinishLaunching {
  %orig;
  SB = self;
}
%end