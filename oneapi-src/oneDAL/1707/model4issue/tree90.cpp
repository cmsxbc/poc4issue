 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree90(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)2.1950000000000007);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 5, (DAAL_DATA_TYPE)2.0060000000000007);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 22, (DAAL_DATA_TYPE)0.70650000000000002);
    builder.addLeafNode(treeId, nodeIds[3], 0, (DAAL_DATA_TYPE)0.0022526847857883884);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[3], 1, 21, (DAAL_DATA_TYPE)0.89250000000000018);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 22, (DAAL_DATA_TYPE)0.9275000000000001);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 0, (DAAL_DATA_TYPE)0.49450000000000005);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 4, (DAAL_DATA_TYPE)0.34350000000000008);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 7, (DAAL_DATA_TYPE)-0.064499999999999988);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)0.012941433367086575);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[9], 1, 0, (DAAL_DATA_TYPE)0.34850000000000003);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)-0.0062398891896009445);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[11], 1, 4, (DAAL_DATA_TYPE)-0.54099999999999993);
    builder.addLeafNode(treeId, nodeIds[13], 0, (DAAL_DATA_TYPE)-5.1961621003491536e-05);
    builder.addLeafNode(treeId, nodeIds[13], 1, (DAAL_DATA_TYPE)0.015625770728696475);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)-0.0015528681597149954);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[7], 1, 8, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    builder.addLeafNode(treeId, nodeIds[17], 0, (DAAL_DATA_TYPE)-0.0048170422206546167);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[17], 1, 18, (DAAL_DATA_TYPE)1.7515000000000003);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 1, (DAAL_DATA_TYPE)-1.4269999999999998);
    builder.addLeafNode(treeId, nodeIds[20], 0, (DAAL_DATA_TYPE)-0.008377337865143393);
    builder.addLeafNode(treeId, nodeIds[20], 1, (DAAL_DATA_TYPE)-0.0011191124013610974);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)0.012017879712705811);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[6], 1, 15, (DAAL_DATA_TYPE)1.5435000000000001);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[24], 0, 7, (DAAL_DATA_TYPE)-0.36649999999999994);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[25], 0, 2, (DAAL_DATA_TYPE)0.50950000000000017);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[26], 0, 25, (DAAL_DATA_TYPE)1.7500000000000002);
    builder.addLeafNode(treeId, nodeIds[27], 0, (DAAL_DATA_TYPE)-9.8506020986589428e-05);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)0.014635049205971883);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[26], 1, 15, (DAAL_DATA_TYPE)0.48000000000000004);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)0.0081413580448893106);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)0.00083090796104321883);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[25], 1, 7, (DAAL_DATA_TYPE)0.6100000000000001);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)-0.0038066457991522773);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[33], 1, 6, (DAAL_DATA_TYPE)-1.2184999999999999);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)-0.0070160076676591028);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)0.0028158812419197161);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)-0.0069331251565487159);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[5], 1, 22, (DAAL_DATA_TYPE)0.77950000000000019);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 6, (DAAL_DATA_TYPE)0.94400000000000006);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)0.0085470560490368656);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)-0.0050005450437311085);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[39], 1, 23, (DAAL_DATA_TYPE)1.2525000000000002);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[43], 0, 7, (DAAL_DATA_TYPE)1.3475000000000004);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)-0.00034821041323875404);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[44], 1, 1, (DAAL_DATA_TYPE)-0.31449999999999995);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)0.008784363753443887);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)-0.0002730762935243547);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[43], 1, 27, (DAAL_DATA_TYPE)0.77250000000000008);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)-0.0057556338851218643);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[49], 1, 7, (DAAL_DATA_TYPE)1.4045000000000003);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 17, (DAAL_DATA_TYPE)0.82850000000000013);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)0.011676267222575254);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[52], 1, 21, (DAAL_DATA_TYPE)1.2085000000000001);
    builder.addLeafNode(treeId, nodeIds[54], 0, (DAAL_DATA_TYPE)0.0068500562316992078);
    builder.addLeafNode(treeId, nodeIds[54], 1, (DAAL_DATA_TYPE)-0.005214868621468278);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)-0.0058399782329797744);
    nodeIds[58] = builder.addSplitNode(treeId, nodeIds[2], 1, 0, (DAAL_DATA_TYPE)1.8945000000000001);
    builder.addLeafNode(treeId, nodeIds[58], 0, (DAAL_DATA_TYPE)0.0051963862116917291);
    builder.addLeafNode(treeId, nodeIds[58], 1, (DAAL_DATA_TYPE)-0.0024815328897437377);
    builder.addLeafNode(treeId, nodeIds[1], 1, (DAAL_DATA_TYPE)-0.0030917673745046535);

}
