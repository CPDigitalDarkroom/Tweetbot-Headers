//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollisionBehaviorDelegate.h"

@interface PTHCollisionBehaviorDelegate : NSObject <UICollisionBehaviorDelegate>
{
    CDUnknownBlockType _beganItemToItemContact;
    CDUnknownBlockType _endedItemToItemContact;
    CDUnknownBlockType _beganItemToBoundaryContact;
    CDUnknownBlockType _endedItemToBoundaryContact;
}

@property(copy, nonatomic) CDUnknownBlockType endedItemToBoundaryContact; // @synthesize endedItemToBoundaryContact=_endedItemToBoundaryContact;
@property(copy, nonatomic) CDUnknownBlockType beganItemToBoundaryContact; // @synthesize beganItemToBoundaryContact=_beganItemToBoundaryContact;
@property(copy, nonatomic) CDUnknownBlockType endedItemToItemContact; // @synthesize endedItemToItemContact=_endedItemToItemContact;
@property(copy, nonatomic) CDUnknownBlockType beganItemToItemContact; // @synthesize beganItemToItemContact=_beganItemToItemContact;
- (void).cxx_destruct;
- (void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withItem:(id)arg3;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withItem:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)attachToBehavior:(id)arg1;

@end
