#import "Headers.h"

NSString *aog = @"AOG Mode triggered";
NSString *passphrase = @"test"
BOOL aogmode;

%hook BBBulletin
- (void)setSectionID:(NSString*)arg1
{
        if ([arg1 isEqualToString: @"com.apple.MobileSMS"] || [arg1 isEqualToString: @"com.google.Gmail"]  || [arg1 isEqualToString: @"ph.telegra.Telegraph"])
               {
				   if ([[self message] isEqual: passphrase]) {
						aogmode = YES;
						[self setMessage: aog];
						// Need to call the method down here
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
%end