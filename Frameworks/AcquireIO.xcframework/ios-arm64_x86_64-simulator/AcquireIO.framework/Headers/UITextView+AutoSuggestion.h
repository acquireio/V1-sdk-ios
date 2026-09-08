//
//  UITextView+AutoSuggestion.h
//  Pods
//
//  Created by Shyngys Kassymov on 29.01.17.
//
//

#import <UIKit/UIKit.h>

@protocol UITextViewAutoSuggestionDataSource <NSObject>

- (UITableViewCell *)autoSuggestionField:(UITextView *)field tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath forText:(NSString *)text;
- (NSInteger)autoSuggestionField:(UITextView *)field tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section forText:(NSString *)text;

@optional
- (void)autoSuggestionField:(UITextView *)field textChanged:(NSString *)text;
- (CGFloat)autoSuggestionField:(UITextView *)field tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath forText:(NSString *)text;
- (void)autoSuggestionField:(UITextView *)field tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath forText:(NSString *)text;

@end

@interface UITextView (AutoSuggestion)

@property (weak, nonatomic) id<UITextViewAutoSuggestionDataSource> autoSuggestionDataSource;

@property (nonatomic, strong) UIView *tableContainerView;
@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) UIView *tableAlphaView;
@property (nonatomic, strong) UIActivityIndicatorView *spinner;
@property (nonatomic, strong) UIView *alphaView;
@property (nonatomic, strong) UIView *emptyView;

@property (nonatomic) BOOL autoSuggestionIsShowing;
@property (nonatomic) BOOL autoSuggestionIsVisible;
@property (nonatomic) CGRect textFieldRectOnWindow;
@property (nonatomic) CGRect keyboardFrameBeginRect;
@property (nonatomic, strong) NSString *fieldIdentifier;
@property (nonatomic) NSInteger maxNumberOfRows;
@property (nonatomic) BOOL showImmediately;
@property (nonatomic) NSInteger minCharsToShow;
@property (nonatomic, strong) UIGestureRecognizer *tapperAlpha;

- (void)observeTextFieldChanges;
- (void)setLoading:(BOOL)loading;

- (void)reloadContents;

@end
