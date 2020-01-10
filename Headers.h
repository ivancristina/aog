@class NSString, NSSet, NSArray, BBContent, BBSectionIcon, NSDate, NSTimeZone, BBAccessoryIcon, BBImage, BBSound, BBAttachmentMetadata, NSMutableDictionary, NSDictionary, BBColor, BBAction;

@interface BBBulletin : NSObject <NSCopying, NSSecureCoding> {

    BOOL _hasCriticalIcon;
    BOOL _hasEventDate;
    BOOL _dateIsAllDay;
    BOOL _clearable;
    BOOL _turnsOnDisplay;
    BOOL _wantsFullscreenPresentation;
    BOOL _ignoresQuietMode;
    BOOL _ignoresDowntime;
    BOOL _preemptsPresentedAlert;
    BOOL _preemptsSTAR;
    BOOL _expiresOnPublisherDeath;
    BOOL _usesExternalSync;
    BOOL _loading;
    BOOL _preventAutomaticRemovalFromLockScreen;
    NSString* _sectionID;
    NSSet* _subsectionIDs;
    NSString* _publisherRecordID;
    NSString* _publisherBulletinID;
    NSString* _dismissalID;
    NSString* _categoryID;
    NSString* _threadID;
    NSArray* _peopleIDs;
    long long _sectionSubtype;
    NSArray* _intentIDs;
    unsigned long long _counter;
    BBContent* _content;
    BBContent* _modalAlertContent;
    BBContent* _starkBannerContent;
    NSString* _summaryArgument;
    unsigned long long _summaryArgumentCount;
    BBSectionIcon* _icon;
    NSDate* _date;
    NSDate* _endDate;
    NSDate* _recencyDate;
    long long _dateFormatStyle;
    NSTimeZone* _timeZone;
    BBAccessoryIcon* _accessoryIconMask;
    BBImage* _accessoryImage;
    BBSound* _sound;
    BBAttachmentMetadata* _primaryAttachment;
    NSArray* _additionalAttachments;
    NSString* _unlockActionLabelOverride;
    NSMutableDictionary* _actions;
    NSMutableDictionary* _supplementaryActionsByLayout;
    NSArray* _buttons;
    NSDictionary* _context;
    NSDate* _expirationDate;
    unsigned long long _expirationEvents;
    NSSet* _alertSuppressionContexts;
    NSString* _bulletinID;
    NSDate* _lastInterruptDate;
    NSDate* _publicationDate;
    NSString* _bulletinVersionID;
    NSString* _parentSectionID;
    NSString* _universalSectionID;
    long long _contentPreviewSetting;
    long long _lockScreenPriority;
    long long _backgroundStyle;
    NSString* _header;
    unsigned long long realertCount_deprecated;
    NSSet* alertSuppressionAppIDs_deprecated;
}
@property (nonatomic,readonly) NSString * sectionDisplayName;
@property (nonatomic,readonly) BBSectionIcon * sectionIcon;
@property (nonatomic,readonly) BOOL showsSubtitle;
@property (nonatomic,readonly) unsigned long long messageNumberOfLines;
@property (nonatomic,readonly) BOOL usesVariableLayout;
@property (nonatomic,readonly) BOOL orderSectionUsingRecencyDate;
@property (nonatomic,readonly) BOOL showsDateInFloatingLockScreenAlert;
@property (nonatomic,readonly) NSString * subtypeSummaryFormat;
@property (nonatomic,readonly) NSString * hiddenPreviewsBodyPlaceholder;
@property (nonatomic,readonly) NSString * missedBannerDescriptionFormat;
@property (nonatomic,readonly) NSString * fullUnlockActionLabel;
@property (nonatomic,readonly) NSString * unlockActionLabel;
@property (nonatomic,readonly) NSSet * alertSuppressionAppIDs;
@property (nonatomic,readonly) BOOL suppressesAlertsWhenAppIsActive;
@property (nonatomic,readonly) BOOL coalescesWhenLocked;
@property (nonatomic,readonly) unsigned long long realertCount;
@property (nonatomic,readonly) BOOL inertWhenLocked;
@property (nonatomic,readonly) BOOL preservesUnlockActionCase;
@property (nonatomic,readonly) BOOL visuallyIndicatesWhenDateIsInFuture;
@property (nonatomic,readonly) NSString * fullAlternateActionLabel;
@property (nonatomic,readonly) NSString * alternateActionLabel;
@property (nonatomic,readonly) BOOL canBeSilencedByMenuButtonPress;
@property (nonatomic,readonly) BOOL preventLock;
@property (nonatomic,readonly) BOOL suppressesTitle;
@property (nonatomic,readonly) BOOL showsUnreadIndicatorForNoticesFeed;
@property (nonatomic,readonly) BOOL showsContactPhoto;
@property (nonatomic,readonly) BOOL playsSoundForModify;
@property (nonatomic,readonly) BOOL allowsAutomaticRemovalFromLockScreen;
@property (nonatomic,readonly) BOOL allowsAddingToLockScreenWhenUnlocked;
@property (nonatomic,readonly) BOOL prioritizeAtTopOfLockScreen;
@property (nonatomic,readonly) BOOL revealsAdditionalContentOnPresentation;
@property (nonatomic,readonly) BOOL shouldDismissBulletinWhenClosed;
@property (nonatomic,readonly) BOOL allowsPersistentBannersInCarPlay;
@property (nonatomic,readonly) BOOL allowsSupplementaryActionsInCarPlay;
@property (nonatomic,readonly) BOOL playsMediaWhenRaised;
@property (nonatomic,readonly) BOOL suppressDelayForForwardedBulletins;
@property (nonatomic,readonly) BOOL hideDismissActionInCarPlay;
@property (nonatomic,readonly) unsigned long long subtypePriority;
@property (nonatomic,readonly) long long iPodOutAlertType;
@property (nonatomic,readonly) BBColor * tintColor;
@property (nonatomic,readonly) NSString * bannerAccessoryRemoteViewControllerClassName;
@property (nonatomic,readonly) NSString * bannerAccessoryRemoteServiceBundleIdentifier;
@property (nonatomic,readonly) NSString * secondaryContentRemoteViewControllerClassName;
@property (nonatomic,readonly) NSString * secondaryContentRemoteServiceBundleIdentifier;
@property (nonatomic,readonly) unsigned long long privacySettings;
@property (nonatomic,readonly) BOOL suppressesMessageForPrivacy;
@property (nonatomic,readonly) NSString * topic;
@property (nonatomic,copy) NSString * section;
@property (nonatomic,copy) NSString * sectionID;                                                      //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,copy) NSSet * subsectionIDs;                                                     //@synthesize subsectionIDs=_subsectionIDs - In the implementation block
@property (nonatomic,copy) NSString * recordID;                                                       //@synthesize publisherRecordID=_publisherRecordID - In the implementation block
@property (nonatomic,copy) NSString * publisherBulletinID;                                            //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,copy) NSString * dismissalID;                                                    //@synthesize dismissalID=_dismissalID - In the implementation block
@property (nonatomic,copy) NSString * categoryID;                                                     //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,copy) NSString * threadID;                                                       //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,copy) NSArray * peopleIDs;                                                       //@synthesize peopleIDs=_peopleIDs - In the implementation block
@property (assign,nonatomic) long long sectionSubtype;                                                //@synthesize sectionSubtype=_sectionSubtype - In the implementation block
@property (nonatomic,copy) NSArray * intentIDs;                                                       //@synthesize intentIDs=_intentIDs - In the implementation block
@property (assign,nonatomic) unsigned long long counter;                                              //@synthesize counter=_counter - In the implementation block
@property (nonatomic,copy) NSString * header;                                                         //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * title;
@property (nonatomic,copy) NSString * subtitle;
@property (nonatomic,copy) NSString * message;
@property (nonatomic,retain) BBContent * content;                                                     //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) BBContent * modalAlertContent;                                           //@synthesize modalAlertContent=_modalAlertContent - In the implementation block
@property (nonatomic,retain) BBContent * starkBannerContent;                                          //@synthesize starkBannerContent=_starkBannerContent - In the implementation block
@property (nonatomic,copy) NSString * summaryArgument;                                                //@synthesize summaryArgument=_summaryArgument - In the implementation block
@property (assign,nonatomic) unsigned long long summaryArgumentCount;                                 //@synthesize summaryArgumentCount=_summaryArgumentCount - In the implementation block
@property (nonatomic,retain) BBSectionIcon * icon;                                                    //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL hasCriticalIcon;                                                    //@synthesize hasCriticalIcon=_hasCriticalIcon - In the implementation block
@property (assign,nonatomic) BOOL hasEventDate;                                                       //@synthesize hasEventDate=_hasEventDate - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                           //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                                        //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSDate * recencyDate;                                                    //@synthesize recencyDate=_recencyDate - In the implementation block
@property (assign,nonatomic) long long dateFormatStyle;                                               //@synthesize dateFormatStyle=_dateFormatStyle - In the implementation block
@property (assign,nonatomic) BOOL dateIsAllDay;                                                       //@synthesize dateIsAllDay=_dateIsAllDay - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                                   //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) BBAccessoryIcon * accessoryIconMask;                                     //@synthesize accessoryIconMask=_accessoryIconMask - In the implementation block
@property (nonatomic,retain) BBImage * accessoryImage;                                                //@synthesize accessoryImage=_accessoryImage - In the implementation block
@property (assign,nonatomic) BOOL clearable;                                                          //@synthesize clearable=_clearable - In the implementation block
@property (nonatomic,retain) BBSound * sound;                                                         //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) BOOL turnsOnDisplay;                                                     //@synthesize turnsOnDisplay=_turnsOnDisplay - In the implementation block
@property (nonatomic,copy) BBAttachmentMetadata * primaryAttachment;                                  //@synthesize primaryAttachment=_primaryAttachment - In the implementation block
@property (nonatomic,copy) NSArray * additionalAttachments;                                           //@synthesize additionalAttachments=_additionalAttachments - In the implementation block
@property (assign,nonatomic) BOOL wantsFullscreenPresentation;                                        //@synthesize wantsFullscreenPresentation=_wantsFullscreenPresentation - In the implementation block
@property (assign,nonatomic) BOOL ignoresQuietMode;                                                   //@synthesize ignoresQuietMode=_ignoresQuietMode - In the implementation block
@property (assign,nonatomic) BOOL ignoresDowntime;                                                    //@synthesize ignoresDowntime=_ignoresDowntime - In the implementation block
@property (assign,nonatomic) BOOL preemptsPresentedAlert;                                             //@synthesize preemptsPresentedAlert=_preemptsPresentedAlert - In the implementation block
@property (assign,nonatomic) BOOL preemptsSTAR;                                                       //@synthesize preemptsSTAR=_preemptsSTAR - In the implementation block
@property (nonatomic,copy) NSString * unlockActionLabelOverride;                                      //@synthesize unlockActionLabelOverride=_unlockActionLabelOverride - In the implementation block
@property (nonatomic,copy) BBAction * defaultAction;
@property (nonatomic,copy) BBAction * alternateAction;
@property (nonatomic,copy) BBAction * acknowledgeAction;
@property (nonatomic,copy) BBAction * snoozeAction;
@property (nonatomic,copy) BBAction * raiseAction;
@property (nonatomic,copy) NSArray * buttons;                                                         //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actions;                                           //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * supplementaryActionsByLayout;                      //@synthesize supplementaryActionsByLayout=_supplementaryActionsByLayout - In the implementation block
@property (nonatomic,copy) NSSet * alertSuppressionContexts;                                          //@synthesize alertSuppressionContexts=_alertSuppressionContexts - In the implementation block
@property (assign,nonatomic) BOOL expiresOnPublisherDeath;                                            //@synthesize expiresOnPublisherDeath=_expiresOnPublisherDeath - In the implementation block
@property (nonatomic,retain) NSDictionary * context;                                                  //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL usesExternalSync;                                                   //@synthesize usesExternalSync=_usesExternalSync - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                           //@synthesize loading=_loading - In the implementation block
@property (nonatomic,copy) NSString * bulletinID;                                                     //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,retain) NSDate * lastInterruptDate;                                              //@synthesize lastInterruptDate=_lastInterruptDate - In the implementation block
@property (nonatomic,retain) NSDate * publicationDate;                                                //@synthesize publicationDate=_publicationDate - In the implementation block
@property (nonatomic,copy) NSString * bulletinVersionID;                                              //@synthesize bulletinVersionID=_bulletinVersionID - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                                                 //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long expirationEvents;                                     //@synthesize expirationEvents=_expirationEvents - In the implementation block
@property (nonatomic,copy) BBAction * expireAction;
@property (assign,nonatomic) unsigned long long realertCount_deprecated;
@property (nonatomic,copy) NSSet * alertSuppressionAppIDs_deprecated;
@property (nonatomic,copy) NSString * parentSectionID;                                                //@synthesize parentSectionID=_parentSectionID - In the implementation block
@property (nonatomic,copy) NSString * universalSectionID;                                             //@synthesize universalSectionID=_universalSectionID - In the implementation block
@property (assign,nonatomic) BOOL hasPrivateContent;
@property (assign,nonatomic) long long contentPreviewSetting;                                         //@synthesize contentPreviewSetting=_contentPreviewSetting - In the implementation block
@property (assign,nonatomic) BOOL preventAutomaticRemovalFromLockScreen;                              //@synthesize preventAutomaticRemovalFromLockScreen=_preventAutomaticRemovalFromLockScreen - In the implementation block
@property (assign,nonatomic) long long lockScreenPriority;                                            //@synthesize lockScreenPriority=_lockScreenPriority - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                               //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherMatchID;
+(BOOL)supportsSecureCoding;
+(void)vetSortDescriptor:(id)arg1 ;
+(id)validSortDescriptorsFromSortDescriptors:(id)arg1 ;
+(id)bulletinWithBulletin:(id)arg1 ;
+(id)bulletinReferenceDateFromDate:(id)arg1 ;
+(id)_lifeAssertionAssociationSet;
+(id)_observerAssociationSet;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(void)addObserver:(id)arg1 ;
-(NSDate *)endDate;
-(unsigned long long)counter;
-(NSDictionary *)context;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setContext:(NSDictionary *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)topic;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)recordID;
-(id)shortDescription;
-(BBContent *)content;
-(NSString *)header;
-(NSString *)section;
-(void)setSubtitle:(NSString *)arg1 ;
-(BBColor *)tintColor;
-(NSMutableDictionary *)actions;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(BBAction *)defaultAction;
-(BBSectionIcon *)icon;
-(void)setIcon:(BBSectionIcon *)arg1 ;
-(void)setSection:(NSString *)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(long long)backgroundStyle;
-(void)setContent:(BBContent *)arg1 ;
-(void)setSound:(BBSound *)arg1 ;
-(BBSound *)sound;
-(void)setActions:(NSMutableDictionary *)arg1 ;
-(void)setDismissAction:(id)arg1 ;
-(id)dismissAction;
-(BOOL)isLoading;
-(void)setRecordID:(NSString *)arg1 ;
-(void)setParentSectionID:(NSString *)arg1 ;
-(NSString *)parentSectionID;
-(void)setHasEventDate:(BOOL)arg1 ;
-(BOOL)hasEventDate;
-(NSString *)categoryID;
-(void)setCategoryID:(NSString *)arg1 ;
-(void)setSummaryArgument:(NSString *)arg1 ;
-(void)setSummaryArgumentCount:(unsigned long long)arg1 ;
-(NSString *)summaryArgument;
-(unsigned long long)summaryArgumentCount;
-(BBAction *)alternateAction;
-(NSString *)hiddenPreviewsBodyPlaceholder;
-(void)setAlternateAction:(BBAction *)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(BBImage *)accessoryImage;
-(void)setAccessoryImage:(BBImage *)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)setDefaultAction:(BBAction *)arg1 ;
-(NSString *)sectionDisplayName;
-(NSString *)bulletinID;
-(long long)sectionSubtype;
-(BOOL)dateIsAllDay;
-(NSDate *)recencyDate;
-(BBContent *)modalAlertContent;
-(NSString *)publisherBulletinID;
-(NSArray *)intentIDs;
-(long long)contentPreviewSetting;
-(NSString *)threadID;
-(unsigned long long)privacySettings;
-(NSSet *)alertSuppressionContexts;
-(void)setCounter:(unsigned long long)arg1 ;
-(BOOL)showsMessagePreview;
-(id)syncHash;
-(NSString *)unlockActionLabel;
-(void)setDateIsAllDay:(BOOL)arg1 ;
-(void)setRecencyDate:(NSDate *)arg1 ;
-(NSDate *)publicationDate;
-(void)setPublicationDate:(NSDate *)arg1 ;
-(NSString *)dismissalID;
-(void)setDismissalID:(NSString *)arg1 ;
-(void)setBulletinID:(NSString *)arg1 ;
-(id)lifeAssertions;
-(void)_fillOutCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(NSString *)bulletinVersionID;
-(NSString *)universalSectionID;
-(NSSet *)subsectionIDs;
-(NSArray *)peopleIDs;
-(BBContent *)starkBannerContent;
-(BOOL)hasCriticalIcon;
-(long long)dateFormatStyle;
-(BBAccessoryIcon *)accessoryIconMask;
-(BOOL)clearable;
-(BOOL)turnsOnDisplay;
-(BBAttachmentMetadata *)primaryAttachment;
-(NSArray *)additionalAttachments;
-(NSString *)unlockActionLabelOverride;
-(BOOL)wantsFullscreenPresentation;
-(BOOL)ignoresQuietMode;
-(BOOL)ignoresDowntime;
-(BOOL)preemptsPresentedAlert;
-(BOOL)preemptsSTAR;
-(NSMutableDictionary *)supplementaryActionsByLayout;
-(unsigned long long)expirationEvents;
-(NSDate *)lastInterruptDate;
-(BOOL)usesExternalSync;
-(BOOL)preventAutomaticRemovalFromLockScreen;
-(long long)lockScreenPriority;
-(unsigned long long)realertCount_deprecated;
-(NSSet *)alertSuppressionAppIDs_deprecated;
-(id)_allActions;
-(id)_actionWithID:(id)arg1 fromActions:(id)arg2 ;
-(id)supplementaryActionsForLayout:(long long)arg1 ;
-(id)_allSupplementaryActions;
-(/*^block*/id)responseSendBlock;
-(id)_responseForAction:(id)arg1 ;
-(id)responseForAction:(id)arg1 ;
-(BBAction *)acknowledgeAction;
-(BBAction *)snoozeAction;
-(BBAction *)raiseAction;
-(BBAction *)expireAction;
-(id)firstValidObserver;
-(id)_actionKeyForType:(long long)arg1 ;
-(void)setUniversalSectionID:(NSString *)arg1 ;
-(void)setSubsectionIDs:(NSSet *)arg1 ;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(void)setThreadID:(NSString *)arg1 ;
-(void)setPeopleIDs:(NSArray *)arg1 ;
-(void)setSectionSubtype:(long long)arg1 ;
-(void)setIntentIDs:(NSArray *)arg1 ;
-(void)setContentPreviewSetting:(long long)arg1 ;
-(void)setModalAlertContent:(BBContent *)arg1 ;
-(void)setStarkBannerContent:(BBContent *)arg1 ;
-(void)setHasCriticalIcon:(BOOL)arg1 ;
-(void)setDateFormatStyle:(long long)arg1 ;
-(void)setAccessoryIconMask:(BBAccessoryIcon *)arg1 ;
-(void)setClearable:(BOOL)arg1 ;
-(void)setTurnsOnDisplay:(BOOL)arg1 ;
-(void)setPrimaryAttachment:(BBAttachmentMetadata *)arg1 ;
-(void)setAdditionalAttachments:(NSArray *)arg1 ;
-(void)setUnlockActionLabelOverride:(NSString *)arg1 ;
-(void)setWantsFullscreenPresentation:(BOOL)arg1 ;
-(void)setIgnoresQuietMode:(BOOL)arg1 ;
-(void)setIgnoresDowntime:(BOOL)arg1 ;
-(void)setPreemptsPresentedAlert:(BOOL)arg1 ;
-(void)setPreemptsSTAR:(BOOL)arg1 ;
-(void)setSupplementaryActionsByLayout:(NSMutableDictionary *)arg1 ;
-(void)setExpirationEvents:(unsigned long long)arg1 ;
-(void)setAlertSuppressionContexts:(NSSet *)arg1 ;
-(void)setLastInterruptDate:(NSDate *)arg1 ;
-(void)setUsesExternalSync:(BOOL)arg1 ;
-(void)setPreventAutomaticRemovalFromLockScreen:(BOOL)arg1 ;
-(void)setLockScreenPriority:(long long)arg1 ;
-(void)setBulletinVersionID:(NSString *)arg1 ;
-(void)setRealertCount_deprecated:(unsigned long long)arg1 ;
-(void)setAlertSuppressionAppIDs_deprecated:(NSSet *)arg1 ;
-(void)copyAssociationsForBulletin:(id)arg1 ;
-(BOOL)hasPrivateContent;
-(void)setHasPrivateContent:(BOOL)arg1 ;
-(unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1 ;
-(id)_safeDescription:(BOOL)arg1 ;
-(long long)primaryAttachmentType;
-(unsigned long long)numberOfAdditionalAttachments;
-(void)setAcknowledgeAction:(BBAction *)arg1 ;
-(void)setExpireAction:(BBAction *)arg1 ;
-(void)setSnoozeAction:(BBAction *)arg1 ;
-(void)setRaiseAction:(BBAction *)arg1 ;
-(id)silenceAction;
-(void)setSilenceAction:(id)arg1 ;
-(id)actionWithIdentifier:(id)arg1 ;
-(id)supplementaryActions;
-(id)responseForDefaultAction;
-(id)responseForAcknowledgeAction;
-(id)responseForButtonActionAtIndex:(unsigned long long)arg1 ;
-(id)responseForSnoozeAction;
-(id)responseForRaiseAction;
-(id)responseForExpireAction;
-(id)actionForResponse:(id)arg1 ;
-(NSString *)publisherMatchID;
-(void)setShowsMessagePreview:(BOOL)arg1 ;
-(id)safeDescription;
-(BOOL)expiresOnPublisherDeath;
-(void)setExpiresOnPublisherDeath:(BOOL)arg1 ;
-(unsigned long long)realertCount;
-(void)addLifeAssertion:(id)arg1 ;
-(BOOL)showsSubtitle;
-(unsigned long long)messageNumberOfLines;
-(BOOL)usesVariableLayout;
-(BOOL)orderSectionUsingRecencyDate;
-(BOOL)showsDateInFloatingLockScreenAlert;
-(NSString *)subtypeSummaryFormat;
-(NSString *)missedBannerDescriptionFormat;
-(NSString *)fullUnlockActionLabel;
-(NSString *)fullAlternateActionLabel;
-(NSString *)alternateActionLabel;
-(NSString *)bannerAccessoryRemoteViewControllerClassName;
-(NSString *)bannerAccessoryRemoteServiceBundleIdentifier;
-(NSString *)secondaryContentRemoteViewControllerClassName;
-(NSString *)secondaryContentRemoteServiceBundleIdentifier;
-(BOOL)suppressesAlertsWhenAppIsActive;
-(BOOL)coalescesWhenLocked;
-(BOOL)inertWhenLocked;
-(BOOL)preservesUnlockActionCase;
-(BOOL)visuallyIndicatesWhenDateIsInFuture;
-(BOOL)canBeSilencedByMenuButtonPress;
-(BOOL)preventLock;
-(BOOL)suppressesTitle;
-(BOOL)showsUnreadIndicatorForNoticesFeed;
-(BOOL)showsContactPhoto;
-(BOOL)playsSoundForModify;
-(unsigned long long)subtypePriority;
-(long long)iPodOutAlertType;
-(BOOL)allowsAutomaticRemovalFromLockScreen;
-(BOOL)allowsAddingToLockScreenWhenUnlocked;
-(BOOL)prioritizeAtTopOfLockScreen;
-(BOOL)revealsAdditionalContentOnPresentation;
-(BOOL)shouldDismissBulletinWhenClosed;
-(BOOL)allowsPersistentBannersInCarPlay;
-(BOOL)allowsSupplementaryActionsInCarPlay;
-(BOOL)playsMediaWhenRaised;
-(BOOL)suppressDelayForForwardedBulletins;
-(BOOL)hideDismissActionInCarPlay;
-(NSSet *)alertSuppressionAppIDs;
-(id)_sectionParameters;
-(id)_sectionSubtypeParameters;
-(BBSectionIcon *)sectionIcon;
-(BOOL)suppressesMessageForPrivacy;
-(id)composedAttachmentImageWithObserver:(id)arg1 ;
-(CGSize)composedAttachmentImageSizeWithObserver:(id)arg1 ;
@end
