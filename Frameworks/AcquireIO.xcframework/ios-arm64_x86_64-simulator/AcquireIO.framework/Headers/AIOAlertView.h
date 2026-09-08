//
//  AIOAlertView.h
//  AIOAlertView
//

#import <UIKit/UIKit.h>

@protocol AIOAlertViewDelegate
@optional
- (void)dialogButtonTouchUpInside:(NSInteger)buttonIndex;

@end

@interface AIOAlertView : UIView<AIOAlertViewDelegate>

@property (nonatomic, retain) UIView *parentView;    // The parent view this 'dialog' is attached to
@property (nonatomic, retain) UIView *dialogView;    // Dialog's container view
@property (nonatomic, retain) UIView *containerView; // Container within the dialog (place your ui elements here)

@property (nonatomic, strong) id<AIOAlertViewDelegate> delegate;
@property (nonatomic, retain) NSArray *buttonTitles;
@property (nonatomic, retain) NSArray *buttonColors;
@property (nonatomic, retain) NSArray *buttonBGColors;
@property (nonatomic, assign) BOOL plainRadiusView;
@property (nonatomic, assign) BOOL useMotionEffects;
@property (nonatomic, assign) BOOL closeOnTouchUpOutside;       // Closes the AlertView when finger is lifted outside the bounds.

@property (copy) void (^onButtonTouchUpInside)(AIOAlertView *alertView, int buttonIndex) ;

- (id)init;

/*!
 DEPRECATED: Use the [AIOAlertView init] method without passing a parent view.
 */
- (id)initWithParentView: (UIView *)_parentView __attribute__ ((deprecated));

- (void)show;
- (void)close;

- (IBAction)customIOS7dialogButtonTouchUpInside:(id)sender;
- (void)setOnButtonTouchUpInside:(void (^)(AIOAlertView *alertView, int buttonIndex))onButtonTouchUpInside;

- (void)deviceOrientationDidChange: (NSNotification *)notification;
- (void)dealloc;

@end
