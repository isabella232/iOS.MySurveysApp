//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/chinthan/Framework/Logger/ConvertCode/OnePoint/Runtime/VirtualMachine/Core/Field.java
//
//  Created by chinthan on 12/2/13.
//

#ifndef _Field_H_
#define _Field_H_


#define Field_AccAbstract 1024
#define Field_AccFinal 16
#define Field_AccNative 256
#define Field_AccPrivate 2
#define Field_AccProtected 4
#define Field_AccPublic 1
#define Field_AccStatic 8
#define Field_AccStrict 2048
#define Field_AccSynchronized 32
#define Field_AccTransient 128
#define Field_AccVolatile 64

@interface Field : NSObject {
 @public
  short int __AccessFlags_;
  NSMutableArray *__Attributes_;
  NSString *__Descriptor_;
  short int __DescriptorIndex_;
  NSString *__Name_;
  short int __NameIndex_;
  NSMutableData *__Code_;
}

+ (short int)AccAbstract;
+ (short int)AccFinal;
+ (short int)AccNative;
+ (short int)AccPrivate;
+ (short int)AccProtected;
+ (short int)AccPublic;
+ (short int)AccStatic;
+ (short int)AccStrict;
+ (short int)AccSynchronized;
+ (short int)AccTransient;
+ (short int)AccVolatile;
- (id)init;
- (id)initWithShort:(short int)accessFlags
          withShort:(short int)nameIndex
          withShort:(short int)descriptorIndex
withAttributeArray:(NSMutableArray *)attributes;
- (id)initWithShort:(short int)accessFlags
       withNSString:(NSString *)name
       withNSString:(NSString *)descriptor
withAttributeArray:(NSMutableArray *)attributes;
- (short int)getAccessFlags;
- (void)setAccessFlagsWithShort:(short int)value;
- (NSMutableArray *)getAttributes;
- (void)setAttributesWithAttributeArray:(NSMutableArray *)value;
- (NSString *)getDescriptor;
- (void)setDescriptorWithNSString:(NSString *)value;
- (short int)getDescriptorIndex;
- (void)setDescriptorIndexWithShort:(short int)value;
- (NSString *)getName;
- (void)setNameWithNSString:(NSString *)value;
- (short int)getNameIndex;
- (void)setNameIndexWithShort:(short int)value;
- (NSMutableData *)getCode;
- (void)setCodeWithByteArray:(NSMutableData *)value;
@end


#endif // _Field_H_