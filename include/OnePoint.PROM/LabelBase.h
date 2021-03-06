// --------------------------------------------------------------------------------------------------------------------
// <copyright file="LabelBase.java" company="OnePoint Global">
//   Copyright (c) 2012 OnePoint Global Ltd. All rights reserved.
// </copyright>
// <summary>
//   This file was autogenerated and you should not edit it. It will be 
//   regenerated whenever the schema changes.
//   All changes should be made in Label.cs and the mode.xml. 
// </summary>
// --------------------------------------------------------------------------------------------------------------------

#import <Foundation/Foundation.h>
#import <OnePointFramework/DataObject.h>
#import "ILabelData.h"




//package OnePoint.PROM.Model 
    


    
@interface  LabelBase : DataObject<DataObject, ILabelData>
{
@private NSNumber *LabelID;
        
@private NSNumber *UserID;
        
@private NSString *Name;
        
@private NSString *Color;
        
@private NSString *Description;
        
@private NSDate *CreatedDate;
        
@private NSDate *LastUpdatedDate;
        
@private NSNumber *RefID;
        
}


	  
/// <summary>
/// Gets or sets the 
/// </summary>

	@property(nonatomic,retain) NSNumber *LabelID;

	/// <summary>
/// Gets or sets the 
/// </summary>

	@property(nonatomic,retain) NSNumber *UserID;

	
	@property(readwrite,strong) NSString *Name;

	
	@property(readwrite,strong) NSString *Color;

	
	@property(readwrite,strong) NSString *Description;

	
	@property(readwrite,strong) NSDate *CreatedDate;

	
	@property(readwrite,strong) NSDate *LastUpdatedDate;

	/// <summary>
/// Gets or sets the 
/// </summary>

	@property(nonatomic,retain) NSNumber *RefID;

	@end
         

    

    