 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree80(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)1.5585000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 5, (DAAL_DATA_TYPE)2.3995000000000002);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 26, (DAAL_DATA_TYPE)0.87150000000000005);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 25, (DAAL_DATA_TYPE)0.94550000000000012);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 16, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)0.00096004921213799959);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[5], 1, 19, (DAAL_DATA_TYPE)1.4970000000000001);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 7, (DAAL_DATA_TYPE)0.58350000000000002);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 25, (DAAL_DATA_TYPE)0.38050000000000006);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)-0.009255517698955119);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[9], 1, 4, (DAAL_DATA_TYPE)1.2175000000000002);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 7, (DAAL_DATA_TYPE)0.24650000000000002);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[12], 0, 17, (DAAL_DATA_TYPE)1.0295000000000003);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[13], 0, 17, (DAAL_DATA_TYPE)0.79050000000000009);
    builder.addLeafNode(treeId, nodeIds[14], 0, (DAAL_DATA_TYPE)-0.00021524197803247697);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)-0.011468511567277424);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[13], 1, 17, (DAAL_DATA_TYPE)1.2035000000000002);
    builder.addLeafNode(treeId, nodeIds[17], 0, (DAAL_DATA_TYPE)0.012923053428530694);
    builder.addLeafNode(treeId, nodeIds[17], 1, (DAAL_DATA_TYPE)-0.001934281157122718);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)-0.011543422287738907);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[11], 1, 7, (DAAL_DATA_TYPE)-0.51849999999999985);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)-0.0028268277306448333);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)0.012914435610535645);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[8], 1, 7, (DAAL_DATA_TYPE)1.4635000000000002);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[24], 0, 1, (DAAL_DATA_TYPE)0.93950000000000011);
    builder.addLeafNode(treeId, nodeIds[25], 0, (DAAL_DATA_TYPE)0.0066421333050943514);
    builder.addLeafNode(treeId, nodeIds[25], 1, (DAAL_DATA_TYPE)-0.0058422546392600787);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)-0.0061065918145080415);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)-0.010755910739010457);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[4], 1, 17, (DAAL_DATA_TYPE)1.5035000000000001);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[30], 0, 0, (DAAL_DATA_TYPE)1.1415000000000002);
    builder.addLeafNode(treeId, nodeIds[31], 0, (DAAL_DATA_TYPE)-0.0032627181109526888);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)-0.012821204817675531);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)0.0072426049546761954);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[3], 1, 25, (DAAL_DATA_TYPE)0.78850000000000009);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[35], 0, 4, (DAAL_DATA_TYPE)0.52850000000000008);
    builder.addLeafNode(treeId, nodeIds[36], 0, (DAAL_DATA_TYPE)-0.0021955185232619056);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[36], 1, 0, (DAAL_DATA_TYPE)1.8525000000000003);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[38], 0, 21, (DAAL_DATA_TYPE)1.7440000000000002);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 13, (DAAL_DATA_TYPE)0.60950000000000004);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)0.0080329175171410232);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[40], 1, 2, (DAAL_DATA_TYPE)-0.93799999999999983);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)-0.0080189892159002584);
    builder.addLeafNode(treeId, nodeIds[42], 1, (DAAL_DATA_TYPE)0.0021683215036649595);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)0.012449044580089635);
    builder.addLeafNode(treeId, nodeIds[38], 1, (DAAL_DATA_TYPE)-0.008272062593272754);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[35], 1, 25, (DAAL_DATA_TYPE)0.98450000000000004);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[47], 0, 3, (DAAL_DATA_TYPE)0.19750000000000004);
    builder.addLeafNode(treeId, nodeIds[48], 0, (DAAL_DATA_TYPE)-0.0072325275504383545);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)0.0027940374039155079);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[47], 1, 4, (DAAL_DATA_TYPE)-1.6104999999999998);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 19, (DAAL_DATA_TYPE)0.092000000000000012);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)-0.0013836872453490893);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)0.01561352777481079);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[51], 1, 7, (DAAL_DATA_TYPE)-1.6334999999999997);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)-0.0077466141354913523);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)8.0739496593520131e-05);
    builder.addLeafNode(treeId, nodeIds[2], 1, (DAAL_DATA_TYPE)0.00560985324111007);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[1], 1, 17, (DAAL_DATA_TYPE)2.0865000000000005);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)-0.0024239893454839206);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)0.0050533173204538352);

}
