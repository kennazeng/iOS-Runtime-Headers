/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, UIImage;

@interface PLJPEGPreheatItem : PLPreheatItem {
    UIImage *_cachedImage;
    unsigned int _cancelled;
    BOOL _dataIsLoading;
    NSString *_imagePath;
    unsigned int _loadingOptions;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_requestGroup;
    unsigned long _requestID;
    NSObject<OS_dispatch_group> *_waitGroup;
}

- (void)_cacheImage;
- (void)_cancel;
- (void)_leaveWaitGroupIfNeeded;
- (void)_uncancel;
- (BOOL)addImageHandler:(id)arg1;
- (id)cachedImage;
- (id)cachedImageIfAvailable;
- (void)cancelPreheatRequest;
- (id)createDecodedImage:(struct CGImage { }*)arg1 data:(id)arg2;
- (void)dealloc;
- (struct __CFDictionary { }*)decodeSessionOptions;
- (id)initWithImagePath:(id)arg1 options:(unsigned int)arg2;
- (id)initialDecodeSessionOptions;
- (BOOL)isCancelled;
- (void)loadPreheatDataWithHandler:(id)arg1;
- (id)preheatData;
- (void)startPreheatRequest;

@end
