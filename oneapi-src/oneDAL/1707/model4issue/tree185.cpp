 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree185(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 11, (DAAL_DATA_TYPE)-1.7314999999999998);
    builder.addLeafNode(treeId, nodeIds[1], 0, (DAAL_DATA_TYPE)-0.0073416117711790976);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[1], 1, 19, (DAAL_DATA_TYPE)1.4605000000000004);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 27, (DAAL_DATA_TYPE)0.68950000000000011);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 9, (DAAL_DATA_TYPE)0.55150000000000021);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 24, (DAAL_DATA_TYPE)0.64150000000000007);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 5, (DAAL_DATA_TYPE)0.62950000000000006);
    builder.addLeafNode(treeId, nodeIds[7], 0, (DAAL_DATA_TYPE)0.007348925496141117);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)-0.0024193638137408667);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)-0.0056552325164721841);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[5], 1, 15, (DAAL_DATA_TYPE)-0.73349999999999993);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 15, (DAAL_DATA_TYPE)-0.91849999999999998);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[12], 0, 9, (DAAL_DATA_TYPE)0.88050000000000017);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[13], 0, 11, (DAAL_DATA_TYPE)0.39150000000000007);
    builder.addLeafNode(treeId, nodeIds[14], 0, (DAAL_DATA_TYPE)0.0053143211030240722);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)-0.0069237195463343103);
    builder.addLeafNode(treeId, nodeIds[13], 1, (DAAL_DATA_TYPE)0.0099958682785544432);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)0.014581225723028182);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[11], 1, 23, (DAAL_DATA_TYPE)0.97950000000000015);
    builder.addLeafNode(treeId, nodeIds[19], 0, (DAAL_DATA_TYPE)-0.010320804975926877);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[19], 1, 17, (DAAL_DATA_TYPE)1.3425000000000002);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 23, (DAAL_DATA_TYPE)0.98950000000000016);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 6, (DAAL_DATA_TYPE)-0.31449999999999995);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)-0.0028691486322454047);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[23], 1, 13, (DAAL_DATA_TYPE)0.78050000000000008);
    builder.addLeafNode(treeId, nodeIds[25], 0, (DAAL_DATA_TYPE)0.01265605173327706);
    builder.addLeafNode(treeId, nodeIds[25], 1, (DAAL_DATA_TYPE)0.0020703500485979021);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[22], 1, 14, (DAAL_DATA_TYPE)0.75200000000000011);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 19, (DAAL_DATA_TYPE)-1.1714999999999998);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)0.007480152861292784);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[29], 1, 5, (DAAL_DATA_TYPE)0.61250000000000016);
    builder.addLeafNode(treeId, nodeIds[31], 0, (DAAL_DATA_TYPE)-0.0061720817740405767);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)0.0024339861339992951);
    builder.addLeafNode(treeId, nodeIds[28], 1, (DAAL_DATA_TYPE)-0.011594466073438526);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)0.010001749324146658);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)-0.00017275362021320869);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[3], 1, 24, (DAAL_DATA_TYPE)0.70250000000000001);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[37], 0, 14, (DAAL_DATA_TYPE)-0.51049999999999984);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)0.0020506211955632482);
    builder.addLeafNode(treeId, nodeIds[38], 1, (DAAL_DATA_TYPE)-0.0096489783303695745);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[37], 1, 17, (DAAL_DATA_TYPE)0.64450000000000018);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)-0.0049425968714058403);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[41], 1, 6, (DAAL_DATA_TYPE)-1.0614999999999999);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[43], 0, 5, (DAAL_DATA_TYPE)0.74850000000000005);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)0.0012622406994480463);
    builder.addLeafNode(treeId, nodeIds[44], 1, (DAAL_DATA_TYPE)0.011665641118518331);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[43], 1, 5, (DAAL_DATA_TYPE)0.89050000000000018);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[47], 0, 22, (DAAL_DATA_TYPE)0.93650000000000022);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[48], 0, 2, (DAAL_DATA_TYPE)-0.12549999999999997);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)0.0025573576007176333);
    builder.addLeafNode(treeId, nodeIds[49], 1, (DAAL_DATA_TYPE)-0.0084049656940624121);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[48], 1, 0, (DAAL_DATA_TYPE)0.75950000000000017);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)0.011474453872587118);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-0.00038281854978131671);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[47], 1, 15, (DAAL_DATA_TYPE)-0.49899999999999994);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)-0.0084713357839854841);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[55], 1, 6, (DAAL_DATA_TYPE)-0.028499999999999998);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)-0.0066444561001844709);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[57], 1, 0, (DAAL_DATA_TYPE)0.99950000000000017);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)0.0080545468175282266);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)-0.0013822745066136123);

}
