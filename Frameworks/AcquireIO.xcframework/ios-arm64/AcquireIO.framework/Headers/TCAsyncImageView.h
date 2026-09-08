//
//  TCAsyncImageView.h


#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <ImageIO/ImageIO.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-missing-property-synthesis"

NS_ASSUME_NONNULL_BEGIN

extern NSString *const TCAsyncImageLoaderErrorDomain;
extern NSString *const TCAsyncImageLoadDidFinish;
extern NSString *const TCAsyncImageLoadDidFail;
extern NSString *const TCAsyncImageImageKey;
extern NSString *const TCAsyncImageURLKey;
extern NSString *const TCAsyncImageCacheKey;
extern NSString *const TCAsyncImageErrorKey;

@interface TCAsyncImageLoader : NSObject
+ (TCAsyncImageLoader *)sharedLoader;
+ (NSCache *)defaultCache;

@property (nonatomic, strong, nullable) NSCache *cache;
@property (nonatomic, assign) NSUInteger concurrentLoads;
@property (nonatomic, assign) NSTimeInterval loadingTimeout;

- (void)loadImageWithURL:(nullable NSURL *)URL target:(nullable id)target success:(nullable SEL)success failure:(nullable SEL)failure;
- (void)loadImageWithURL:(nullable NSURL *)URL target:(nullable id)target action:(nullable SEL)action;
- (void)loadImageWithURL:(nullable NSURL *)URL;
- (void)cancelLoadingURL:(nullable NSURL *)URL target:(nullable id)target action:(nullable SEL)action;
- (void)cancelLoadingURL:(nullable NSURL *)URL target:(nullable id)target;
- (void)cancelLoadingURL:(nullable NSURL *)URL;
- (void)cancelLoadingImagesForTarget:(nullable id)target action:(nullable SEL)action;
- (void)cancelLoadingImagesForTarget:(nullable id)target;
- (NSURL *)URLForTarget:(nullable id)target action:(nullable SEL)action;
- (NSURL *)URLForTarget:(nullable id)target;
@end


@interface UIImageView(TCAsyncImageView)

@property (nonatomic, strong, nullable) NSURL *imageURL;

@end


@interface TCAsyncImageView : UIImageView


@property (nonatomic, assign) BOOL showActivityIndicator;
@property (nonatomic, assign) UIActivityIndicatorViewStyle activityIndicatorStyle;
@property (nonatomic, strong, nullable) UIColor *activityIndicatorColor;
@property (nonatomic, assign) NSTimeInterval crossfadeDuration;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop

