//
//  HYPFielsetsCollectionViewDataSource.h

//
//  Created by Elvis Nunez on 10/6/14.
//  Copyright (c) 2014 Hyper. All rights reserved.
//

@import Foundation;
@import UIKit;

#import "HYPFormsLayout.h"

#import "HYPBaseFormFieldCell.h"
#import "HYPFormHeaderView.h"

#import "HYPFormField.h"
#import "HYPForm.h"

typedef void (^HYPFieldConfigureCellBlock)(id cell, NSIndexPath *indexPath, HYPFormField *field);
typedef void (^HYPFieldConfigureHeaderViewBlock)(HYPFormHeaderView *headerView, NSString *kind, NSIndexPath *indexPath, HYPForm *form);

@interface HYPFormsCollectionViewDataSource : NSObject <HYPFielsetsLayoutDataSource, UICollectionViewDataSource>

- (instancetype)initWithCollectionView:(UICollectionView *)collectionView;
- (instancetype)initWithCollectionView:(UICollectionView *)collectionView andDictionary:(NSDictionary *)dictionary;

@property (nonatomic, strong) NSArray *forms;
@property (nonatomic, strong) NSMutableArray *collapsedForms;

@property (nonatomic, copy) HYPFieldConfigureCellBlock configureCellBlock;
@property (nonatomic, copy) HYPFieldConfigureHeaderViewBlock configureHeaderViewBlock;

- (void)collapseFieldsInSection:(NSInteger)section collectionView:(UICollectionView *)collectionView;
- (CGSize)sizeForItemAtIndexPath:(NSIndexPath *)indexPath;

@end
