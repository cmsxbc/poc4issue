 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree186(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 15, (DAAL_DATA_TYPE)1.6265000000000003);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 15, (DAAL_DATA_TYPE)1.5545000000000002);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 5, (DAAL_DATA_TYPE)1.3445000000000003);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 8, (DAAL_DATA_TYPE)1.6300000000000001);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 5, (DAAL_DATA_TYPE)1.1515000000000002);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)-0.00024564761961300976);
    builder.addLeafNode(treeId, nodeIds[5], 1, (DAAL_DATA_TYPE)-0.0038865994336409167);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[4], 1, 25, (DAAL_DATA_TYPE)1.2045000000000001);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 26, (DAAL_DATA_TYPE)1.0165000000000002);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 0, (DAAL_DATA_TYPE)0.61550000000000005);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 7, (DAAL_DATA_TYPE)-0.89149999999999985);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)0.004011587273188919);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)-0.0038228780290627202);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[10], 1, 24, (DAAL_DATA_TYPE)0.88250000000000017);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 2, (DAAL_DATA_TYPE)-1.3584999999999998);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)0.0091225988560301417);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)0.0019235330194894769);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)-0.00082265441336173127);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[9], 1, 3, (DAAL_DATA_TYPE)0.91150000000000009);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 21, (DAAL_DATA_TYPE)0.9085000000000002);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 6, (DAAL_DATA_TYPE)0.23500000000000001);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)0.00021242632283247076);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)0.010540820196113219);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[20], 1, 6, (DAAL_DATA_TYPE)-0.34349999999999997);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)0.0028723013662808653);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)-0.0070073212449580941);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[19], 1, 27, (DAAL_DATA_TYPE)1.4855000000000003);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[27], 0, 10, (DAAL_DATA_TYPE)-0.14449999999999996);
    builder.addLeafNode(treeId, nodeIds[28], 0, (DAAL_DATA_TYPE)0.0031903975011987823);
    builder.addLeafNode(treeId, nodeIds[28], 1, (DAAL_DATA_TYPE)0.0097153645323523261);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)-0.0030237479209899902);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[8], 1, 26, (DAAL_DATA_TYPE)0.92450000000000021);
    builder.addLeafNode(treeId, nodeIds[32], 0, (DAAL_DATA_TYPE)-0.0067286193613218127);
    builder.addLeafNode(treeId, nodeIds[32], 1, (DAAL_DATA_TYPE)-0.00037025294959312305);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[3], 1, 25, (DAAL_DATA_TYPE)0.32150000000000006);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)0.009406565092504024);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[35], 1, 11, (DAAL_DATA_TYPE)-1.1914999999999998);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[37], 0, 11, (DAAL_DATA_TYPE)-1.4449999999999996);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[38], 0, 4, (DAAL_DATA_TYPE)0.22850000000000004);
    builder.addLeafNode(treeId, nodeIds[39], 0, (DAAL_DATA_TYPE)-0.0034964040749811479);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)0.0079720365069806589);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[38], 1, 7, (DAAL_DATA_TYPE)0.41550000000000004);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)-0.012961655796971172);
    builder.addLeafNode(treeId, nodeIds[42], 1, (DAAL_DATA_TYPE)-6.4933107679952747e-05);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)0.0012959143560495997);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[2], 1, 13, (DAAL_DATA_TYPE)0.73250000000000004);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)-0.0090737544654591658);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[46], 1, 5, (DAAL_DATA_TYPE)0.73250000000000004);
    builder.addLeafNode(treeId, nodeIds[48], 0, (DAAL_DATA_TYPE)0.0066796096317746027);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[48], 1, 27, (DAAL_DATA_TYPE)0.94750000000000012);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)0.0015489407313557773);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)-0.0096498977315301708);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[1], 1, 23, (DAAL_DATA_TYPE)0.99750000000000016);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[53], 0, 13, (DAAL_DATA_TYPE)0.95650000000000002);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[54], 0, 4, (DAAL_DATA_TYPE)0.86550000000000005);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)0.0057002901071112376);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)0.014031406082212925);
    builder.addLeafNode(treeId, nodeIds[54], 1, (DAAL_DATA_TYPE)-0.00014112434000708164);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[53], 1, 7, (DAAL_DATA_TYPE)-0.48349999999999993);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)-0.008663169700991024);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)0.0017585618015474236);

}
