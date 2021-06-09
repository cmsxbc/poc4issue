 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree99(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 27, (DAAL_DATA_TYPE)0.90250000000000019);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 26, (DAAL_DATA_TYPE)1.1165000000000003);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 13, (DAAL_DATA_TYPE)1.9140000000000001);
    builder.addLeafNode(treeId, nodeIds[3], 0, (DAAL_DATA_TYPE)0.00029600329239950042);
    builder.addLeafNode(treeId, nodeIds[3], 1, (DAAL_DATA_TYPE)0.0054620982012201155);
    builder.addLeafNode(treeId, nodeIds[2], 1, (DAAL_DATA_TYPE)0.010128990018173405);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[1], 1, 11, (DAAL_DATA_TYPE)1.5005000000000002);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 24, (DAAL_DATA_TYPE)1.1465000000000003);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 18, (DAAL_DATA_TYPE)0.75050000000000006);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 27, (DAAL_DATA_TYPE)0.98250000000000004);
    builder.addLeafNode(treeId, nodeIds[10], 0, (DAAL_DATA_TYPE)-0.0047494222984987636);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)-0.00073520126216119965);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[9], 1, 9, (DAAL_DATA_TYPE)0.53150000000000019);
    builder.addLeafNode(treeId, nodeIds[13], 0, (DAAL_DATA_TYPE)-0.0079190855094742382);
    builder.addLeafNode(treeId, nodeIds[13], 1, (DAAL_DATA_TYPE)0.0022385093688466391);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[8], 1, 9, (DAAL_DATA_TYPE)1.6925000000000001);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[16], 0, 17, (DAAL_DATA_TYPE)1.5975000000000004);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[17], 0, 18, (DAAL_DATA_TYPE)0.84250000000000014);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 25, (DAAL_DATA_TYPE)1.7500000000000002);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 27, (DAAL_DATA_TYPE)1.413);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 13, (DAAL_DATA_TYPE)1.0065000000000002);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)0.0057163570528391055);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[21], 1, 17, (DAAL_DATA_TYPE)0.58750000000000002);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)-0.009653949122311491);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[23], 1, 26, (DAAL_DATA_TYPE)1.3285000000000002);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[25], 0, 27, (DAAL_DATA_TYPE)0.96650000000000003);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)0.010100642699868448);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[26], 1, 15, (DAAL_DATA_TYPE)1.2055000000000002);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 5, (DAAL_DATA_TYPE)1.1575000000000002);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)-0.0089668468372630216);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)0.0045092866796514258);
    builder.addLeafNode(treeId, nodeIds[28], 1, (DAAL_DATA_TYPE)0.0084380522031675693);
    builder.addLeafNode(treeId, nodeIds[25], 1, (DAAL_DATA_TYPE)0.010724113070789507);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[20], 1, 6, (DAAL_DATA_TYPE)-0.028499999999999998);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)-0.012311139242614018);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[34], 1, 21, (DAAL_DATA_TYPE)1.5015000000000003);
    builder.addLeafNode(treeId, nodeIds[36], 0, (DAAL_DATA_TYPE)-0.0047717427015304568);
    builder.addLeafNode(treeId, nodeIds[36], 1, (DAAL_DATA_TYPE)0.010302484922465825);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)-0.0046421456112954269);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[18], 1, 5, (DAAL_DATA_TYPE)0.63850000000000018);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)-0.014214653056114912);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[40], 1, 23, (DAAL_DATA_TYPE)0.98450000000000004);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[42], 0, 14, (DAAL_DATA_TYPE)0.22050000000000003);
    builder.addLeafNode(treeId, nodeIds[43], 0, (DAAL_DATA_TYPE)-0.017973720207810403);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)-0.00022733043879270555);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[42], 1, 15, (DAAL_DATA_TYPE)1.1475000000000002);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[46], 0, 7, (DAAL_DATA_TYPE)-0.41149999999999992);
    builder.addLeafNode(treeId, nodeIds[47], 0, (DAAL_DATA_TYPE)-0.0092135426402091981);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[47], 1, 26, (DAAL_DATA_TYPE)1.3345000000000002);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)-0.0023166261696153218);
    builder.addLeafNode(treeId, nodeIds[49], 1, (DAAL_DATA_TYPE)0.01304146722846088);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)0.011046869611448568);
    builder.addLeafNode(treeId, nodeIds[17], 1, (DAAL_DATA_TYPE)-0.00451915212867097);
    builder.addLeafNode(treeId, nodeIds[16], 1, (DAAL_DATA_TYPE)0.0047337910999924364);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[7], 1, 18, (DAAL_DATA_TYPE)-0.38499999999999995);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 19, (DAAL_DATA_TYPE)0.12150000000000001);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)-0.0057176185179163112);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)0.008000315055851975);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[55], 1, 22, (DAAL_DATA_TYPE)0.94650000000000001);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)-0.00017545015883765051);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)-0.0095699085031112994);

}
