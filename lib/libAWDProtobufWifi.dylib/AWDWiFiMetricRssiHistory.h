/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDProtobufWifi.dylib
 */

@interface AWDWiFiMetricRssiHistory : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int timestamp : 1; 
    } _has;
    } _rssiHistorys;
    unsigned long long _timestamp;
}

@property BOOL hasTimestamp;
@property(readonly) int* rssiHistorys;
@property(readonly) unsigned int rssiHistorysCount;
@property unsigned long long timestamp;

- (void)addRssiHistory:(int)arg1;
- (void)clearRssiHistorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)rssiHistoryAtIndex:(unsigned int)arg1;
- (int*)rssiHistorys;
- (unsigned int)rssiHistorysCount;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setRssiHistorys:(int*)arg1 count:(unsigned int)arg2;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
