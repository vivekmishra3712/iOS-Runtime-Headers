/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class SymbolParserData, <SymbolValidatorDelegate>, NSMutableArray;

@interface SymbolValidator : XMLHTTPRequest  {
    <SymbolValidatorDelegate> *_delegate;
    NSMutableArray *_validatedSymbols;
    SymbolParserData *_symbolParserData;
}

@property id delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (void)failWithError:(id)arg1;
- (id)aggregateDictionaryDomain;
- (void)didParseData;
- (void)validateSymbol:(id)arg1 withMaxResults:(int)arg2;
- (int)parseData:(id)arg1;

@end