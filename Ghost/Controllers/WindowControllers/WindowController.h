//
//  WindowController.h
//  Ghost
//
//  Created by Enric Enrich on 09/09/15.
//
//

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>
#import "MacGap.h"

@class WebViewDelegate;

@interface WindowController : NSWindowController
{
    IBOutlet WebView *webView;
    IBOutlet NSWindow *window;
    WebViewDelegate *webViewDelegate;
    JSContext *jsContext;
}

@property (nonatomic, readonly, strong) NSMutableDictionary *pluginObjects;
@property (nonatomic, readonly, strong) NSDictionary *pluginsMap;
@property (nonatomic, readonly, strong) NSMutableDictionary *settings;
@property (strong) JSContext *jsContext;
@property (retain) WebView *webView;
@property (strong) IBOutlet NSMenu *mainMenu;
@property (retain) WebViewDelegate *webViewDelegate;

@property (retain) NSURL *url;

@property (nonatomic, readonly) NSString *userAgent;

- (id)initWithURL:(NSString *) url;
- (id)initWithRequest:(NSURLRequest *)request;

- (id)getCommandInstance:(NSString *)pluginName;
- (void)setWindowParams;

@end