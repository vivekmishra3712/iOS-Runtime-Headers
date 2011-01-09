/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSInputStream;



@interface PBStreamReader : PBDataReader 
{
    NSInputStream *_stream;
}

@property(retain) NSInputStream *stream; /* unknown property attribute: V_stream */


- (id)initWithStream:(id)arg1;
- (void)dealloc;
- (NSInteger)read:(char *)arg1 maxLength:(NSUInteger)arg2;
- (id)readBytes:(NSUInteger)arg1;
- (BOOL)seekToOffset:(NSUInteger)arg1;
- (id)stream;
- (void)setStream:(id)arg1;

@end